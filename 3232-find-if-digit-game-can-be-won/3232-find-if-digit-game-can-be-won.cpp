class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlesum=0;
        int doublesum=0;

        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<10){
                singlesum += nums[i];
            }
            else{
                doublesum += nums[i];
            }
        }
        if(singlesum == doublesum){
            return false;
        }
        return true;
    }
};