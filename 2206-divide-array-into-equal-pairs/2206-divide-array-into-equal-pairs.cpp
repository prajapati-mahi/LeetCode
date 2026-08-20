class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n= nums.size();

        if(n%2 ==1){
            return false;
        }
        sort(nums.begin(), nums.end());
        int count=1;
        int prev=0;
        for(int i=1; i<n; i++){
            if(nums[prev]== nums[i]){
                count++;
                prev=i;
            }
            else if(nums[prev] != nums[i]){
                if(count%2 ==1){
                    return false;
                }
                count=1;
                prev=i;
            }
        }
        return true;
    }
};