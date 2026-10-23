class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n= nums.size();

        int ans=0;
        int count=1;
        for(int i=0; i<n; i++){
            if((n%count) ==0){
                ans += nums[i]* nums[i];
            }
            count++;
        }
        return ans;
    }
};