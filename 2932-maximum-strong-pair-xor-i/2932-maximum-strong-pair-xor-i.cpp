class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n= nums.size();

        int ans=0;
        int maxi= 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(abs(nums[i]- nums[j]) <= min(nums[j], nums[i])){
                    ans= nums[i]^nums[j];
                    maxi= max(ans, maxi);
                }
            }
        }
        return maxi;
    }
};