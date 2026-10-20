class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n= nums.size();
        int idx=-1;
        int prev=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                prev= idx;
                idx=i;
                if(idx- prev-1 <k && prev != -1){
                    return false;
                }
            }
        }
        return true;
    }
};