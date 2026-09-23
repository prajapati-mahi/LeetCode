class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n= nums.size();
        int gap=0;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-1; i++){
            if(nums[i+1]- nums[i]> gap){
                gap= nums[i+1]- nums[i];
            }
        }
        return gap;
    }
};