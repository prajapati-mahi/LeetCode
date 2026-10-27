class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n= nums.size();
        int ans=0;

        for(int i=0; i<n; i++){
            int a= i;
            int count=0;
            while(a>0){
                int last= a%2;
                if(last==1){
                    count++;
                }
                a= a/2;
            }
            if(count ==k){
                ans += nums[i];
            }
        }
        return ans;
    }
};