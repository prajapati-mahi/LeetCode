class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n= nums.size();
        int count=0;
        if(n==1){
            return 0;
        }
        if(n==2){
            if(nums[0]- nums[1]== k || nums[1]- nums[0]== k){
                return 1;
            }
            else{
                return 0;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]- nums[j] == k || nums[j]- nums[i]==k){
                    count++;
                }
            }
        }
        return count;
    }
};