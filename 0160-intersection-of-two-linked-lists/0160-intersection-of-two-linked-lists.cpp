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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1= headA;
        ListNode* temp2= headB;
        ListNode* tempA= headA;
        ListNode* tempB= headB;
        int count1=0;
        int count2=0;
        while(temp1 != nullptr){
            count1++;
            temp1= temp1->next;
        }
        while(temp2 != nullptr){
            count2++;
            temp2= temp2->next;
        }
        int diff=0;
        if(count1>= count2){
            diff= count1-count2;
            if(diff ==0){
                while(tempA != nullptr){
                    if(tempA == tempB){
                        // tempA->next= nullptr;
                        return tempA;
                    }
                    tempA= tempA->next;
                    tempB= tempB->next;
                }
            }
            while(tempA != nullptr){
                if(diff !=0){
                    tempA= tempA->next;
                    diff--;
                }
                else{
                    if(tempA == tempB){
                        // tempA->next= nullptr;
                        return tempA;
                    }
                    tempA= tempA->next;
                    tempB= tempB->next;
                }
            }
        }
        else{
            diff= count2- count1;
            while(tempA != nullptr){
                if(diff !=0){
                    tempB= tempB->next;
                    diff--;
                }
                else{
                    if(tempA == tempB){
                        // tempA->next= nullptr;
                        return tempA;
                    }
                    tempA= tempA->next;
                    tempB= tempB->next;
                }
            }
        }
        return nullptr;
    }
};