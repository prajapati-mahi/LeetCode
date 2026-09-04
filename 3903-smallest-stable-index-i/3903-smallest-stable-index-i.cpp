class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();

        int maxsofar=nums[0];
        
        int current=0;
        for(int i=0; i<n; i++){
            if(nums[i]> maxsofar){
                maxsofar= nums[i];
            }
            int minimum= INT_MAX;
            for(int j=i; j<n; j++){
                minimum= min(minimum, nums[j]);
            }
            current= maxsofar- minimum;
            if(current<=k){
                return i;
            }
        }
        return -1;
    }
};