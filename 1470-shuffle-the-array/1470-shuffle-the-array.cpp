class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> x;
        vector<int> y;

        for(int i=0; i< 2*n; i++){
            if(i<n){
                x.push_back(nums[i]);
            }
            else{
                y.push_back(nums[i]);
            }
        }

        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }
        return ans;
    }
};