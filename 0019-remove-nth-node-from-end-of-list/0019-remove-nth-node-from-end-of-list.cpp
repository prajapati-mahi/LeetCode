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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp= head;
        int count=0;

        while(temp != nullptr){
            count++;
            temp= temp->next;
        }
        if(count == n){
            return head->next;
        }
        
        int res= count-n-1;
        ListNode* temps= head;
        while(res != 0){
            temps= temps->next;
            res--;
        }
        if(n==1){
            ListNode* delet= temps->next;
            temps->next= nullptr;
            delete(delet);
            return head;
        }
        ListNode* dele= temps->next;
        temps->next= temps->next->next;
        delete(dele);
        
        return head;
    }
};