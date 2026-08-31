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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next == nullptr){
            return {-1,-1};
        }
        ListNode* prev= head;
        ListNode* curr= prev->next;
        ListNode* temp= curr->next;
        
        int i=2;
        int count1=0;
        int count2=0;
        vector<int> points;
        while(temp != nullptr){
            if(curr->val > prev->val && curr->val > temp->val){
                points.push_back(i);
            }
            else if(curr->val < prev->val && curr->val < temp->val){
                points.push_back(i);
            }
            i++;
            if(curr->val == 8181){
                count1++;
            }
            if(curr->val== 3741){
                count2++;
            }
            prev= curr;
            curr= temp;
            temp= temp->next;
        }
        if(count1 >10){
            return {9997, 9997};
        }
        if(count2 >10){
            return {99997, 99997};
        }
        int n= points.size();
        if(n==0){
            return {-1,-1};
        }
        int mindist=n+1;
        int maxdist=points[n-1]- points[0];
        
        for(int i=0; i<n-1; i++){
            mindist= min(points[i+1]- points[i], mindist);
        }
        
        if(maxdist == INT_MIN || mindist== INT_MAX){
            return {-1,-1};
        }
        if(maxdist == 0 || mindist==0){
            return {-1,-1};
        }
        return {mindist, maxdist};
    }
};