class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n= nums.size();
        int counteven=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                counteven++;
                if(counteven >=2){
                    return true;
                }
            }
        }
        return false;
    }
};