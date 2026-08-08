/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== nullptr || head->next== nullptr || head->next->next== nullptr){
            return false;
        }
        ListNode* slow= head->next;
        ListNode* fast= slow->next;

        while(fast != slow && fast != nullptr){
            slow= slow->next;
            if(fast->next == nullptr || fast->next->next== nullptr){
                return false;
            }
            fast= fast->next->next;
            if(slow== fast){
                return true;
            }
        }
        return true;
    }
};