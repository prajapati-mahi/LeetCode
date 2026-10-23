class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]== nums[i+1]){
                nums[i]= 2* nums[i];
                nums[i+1] =0;
            }
            if(nums[i]==0){
                count++;
            }
        }

        int insertPos = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }
        
        while(insertPos < n){
            nums[insertPos] = 0;
            insertPos++;
        }
        return nums;
    }
};