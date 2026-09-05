class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n= nums.size();
        if(n==1){
            return 0;
        }
        if(n==2){
            if(nums[0]==0){
                if(nums[1]==0){
                    return 0;
                }
                return 1;
            }
            else if(nums[1]==0){
                return 0;
            }
        }
        int sumleft=nums[0];
        int sumright=0;
        for(int i=1; i<n; i++){
            sumright += nums[i];
        }
        if(sumright ==0){
            return 0;
        }
        for(int i=1; i<n-1; i++){
            sumleft+= nums[i];
            if(sumleft == sumright){
                return i;
            }
            sumright -= nums[i];
        }
        if(sumleft == 0){
            return n-1;
        }
        return -1;
    }
};