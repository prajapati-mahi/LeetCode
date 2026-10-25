class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n= nums.size();

        int ans=0;
        sort(nums.begin(), nums.end());

        int a= nums[n-1];
        while(k>0){
            ans+= a;
            a++;
            k--;
        }
        return ans;
    }
};