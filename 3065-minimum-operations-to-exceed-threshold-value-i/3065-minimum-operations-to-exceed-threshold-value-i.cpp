class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n= nums.size();
        sort(nums.begin(), nums.end());

        int count=0;
        int i=0;
        while(i<n){
            if(nums[i] <k){
                count++;
            }
            else{
                break;
            }
            i++;
        }
        return count;
    }
};