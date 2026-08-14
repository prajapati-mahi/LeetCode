class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int, int> hashh;

        for(int i=0; i<n; i++){
            int complement= target- nums[i];
            if(hashh.find(complement) != hashh.end()){
                return {hashh[complement], i};
            }  
            hashh[nums[i]]=i;          
        }  
        return {};
    }
};