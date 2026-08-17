class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0;
        int r=0;
        if(n==1){
            if(nums[0]==k){
                return 1;
            }
            else{
                return 0;
            }
        }
        int sum=0;
        int count=0;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};