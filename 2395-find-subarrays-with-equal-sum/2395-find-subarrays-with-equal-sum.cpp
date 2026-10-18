class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n= nums.size();
        if (n<=2){
            return false;
        }
        
        unordered_set<int> seen_sums;
        for(int i=1; i<n; i++){
            int sum= nums[i-1]+ nums[i];

            if(seen_sums.count(sum)){
                return true;
            }
            seen_sums.insert(sum);
        }
        return false;
    }
};