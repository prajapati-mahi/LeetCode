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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        if(head== nullptr || head->next== nullptr || head->next->next== nullptr){
            return nullptr;
        }
        while(fast != nullptr){
            slow= slow->next;
            if(fast->next == nullptr || fast->next->next== nullptr){
                return nullptr;
            }
            fast= fast->next->next;
            if(slow== fast){
                break;
            }
        }
        if(fast== nullptr){
            return nullptr;
        }
        slow= head;
        int count=0;
        if(slow == fast){
            return slow;
        }
        while(fast != slow){
            slow= slow->next;
            fast= fast->next;
            count++;
            if(slow== fast){
                return slow;
            }
        }
        return nullptr;
    }
};