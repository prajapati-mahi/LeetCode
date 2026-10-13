class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                nums[i]= -1* nums[i];
            }
        }
        sort(nums.begin(), nums.end());
        
        long long sum=0;
        //if(n%2==0){
            for(int i=0; i<n; i++){
                if(i<n/2){
                    sum -= nums[i]* nums[i];
                }
                else{
                    sum += nums[i]* nums[i];
                }
            }
        //}
        return sum;
    }
};