class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n= nums.size();

        sort(nums.begin(), nums.end());

        int mini= nums[0];
        int maxi= nums[n-1];
        if(n>2){
            return nums[1];
        }
        return -1;
    }
};