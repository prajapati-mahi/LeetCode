class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n= nums.size();

        int count=0;
        int curr=0;
        for(int i=0; i<n; i++){
            curr= curr+ nums[i];

            if(curr==0){
                count++;
            }
        }
        return count;
    }
};