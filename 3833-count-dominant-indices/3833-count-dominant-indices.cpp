class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n= nums.size();

        int sum=0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int count=0;
        for(int i=0; i<n; i++){
            if(i==n-1){
                break;
            }
            sum= sum- nums[i];
            int k= n-1-i;
            if(k==0){
                break;
            }
            int avg= sum/k;
            if(avg < nums[i]){
                count++;
            }
        }
        return count;
    }
};