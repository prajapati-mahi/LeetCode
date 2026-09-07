class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n= nums.size();

        int maxi=INT_MIN;
        int sec= INT_MIN;
        int idx=-1;
        for(int i=0; i<n; i++){
            if(nums[i]> maxi){
                sec= maxi;
                maxi= max(maxi, nums[i]);
                idx= i;
            }
            else if (nums[i] > sec) {
                sec = nums[i];
            }
        }
        if(maxi >= 2* sec){
            return idx;
        }
        return -1;
    }
};