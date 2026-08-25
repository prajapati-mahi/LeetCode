class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        int ans=0;
        sort(nums.begin(), nums.end());
        int maxi= nums[n-1]+k;
        int mul=k;
        for(int i=0; i<n; i++){
            if(nums[i]== mul){
                mul= mul+k;
            }
            else if(nums[i]<mul){
                continue;
            }
            else{
                return mul;
            }
        }
        return mul;
    }
};