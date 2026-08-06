/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* reversed(ListNode* head){
    if(head== nullptr || head->next== nullptr){
        return head;
    }
    ListNode* newHead= reversed(head->next);
    ListNode* front= head->next;
    front->next= head;
    head->next= nullptr;
    return newHead;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        ListNode* temp= head;

        while(fast && fast->next){
            slow= slow->next;
            fast= fast->next->next;
        }

        ListNode* newh= reversed(slow);
        ListNode* left= head;
        ListNode* right= newh;
        while(right != nullptr){
            if(left->val != right->val){
                return false;
            }
            left= left->next;
            right= right->next;
        }
        return true;       
    }
};