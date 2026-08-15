class Solution {
public:
    int countElements(vector<int>& nums) {
        int n= nums.size();

        if(n<=2){
            return 0;
        }

        sort(nums.begin(), nums.end());
        int count=2;
        int start= nums[0];
        int end= nums[n-1];
        for(int i=1; i<n-1; i++){
            if(nums[i]== start || nums[i]== end){
                count++;
            }
        }
        return n-count;
    }
};