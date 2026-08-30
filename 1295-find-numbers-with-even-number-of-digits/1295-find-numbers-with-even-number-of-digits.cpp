class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n= nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]<10){
                continue;
            }
            else if(nums[i] <100){
                count++;
            }
            else if(nums[i]<1000){
                continue;
            }
            else if(nums[i] <10000){
                count++;
            }
            else if(nums[i]<100000){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};