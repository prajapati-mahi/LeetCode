class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;

        int n= nums.size();
        for(int i=0; i<n; i++){
            if(i%2 ==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());        
        reverse(odd.begin(), odd.end());

        vector<int> ans;
        int last= even.size();
        
        for(int i=0; i<n/2; i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        
        if(n%2 !=0){
            ans.push_back(even[last-1]);
        }
        
        return ans;
    }
};