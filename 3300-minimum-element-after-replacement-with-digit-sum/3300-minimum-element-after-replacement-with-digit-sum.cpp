class Solution {
public:
    int minElement(vector<int>& nums) {
        int n= nums.size();
    
        int mini=INT_MAX;
        int i=0;
        while(i<n){
            int k= nums[i];
            int sum=0;
            while(k>0){
                int last= k%10;
                sum += last;
                k= k/10;
            }
            i++;
            mini= min(sum, mini);
        }
        return mini;
    }
};