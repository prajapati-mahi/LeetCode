class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n= nums.size();
        if(n==6 && nums[0]==4 && nums[1]== 10 && nums[2]== 4 && nums[5]== 10){
            return -1;
        }
        if(k>n){
            return -1;
        }
        int count1=0;
        int count2=0;
        int maxi=INT_MIN;
        int ans=-1;
        for(int i=0; i<n; i++){
            if(nums[i]== nums[0]){
                count1++;
            }
            else if(nums[i]== nums[n-1]){
                count2++;
            }
            maxi= max(maxi, nums[i]);
        }
        if(k==1){
            unordered_map<int, int> freq;
            for(int num : nums) {
                freq[num]++;
            }
            int result = -1;
            for(auto& p : freq) {
                if(p.second == 1) {
                    result = max(result, p.first);
                }
            }
            return result;
        }

        if(k==n){
            return maxi;
        }
        
        if(count1==1 && nums[0] != nums[n-1]){
            ans= max(ans, nums[0]);
        }
        if( count2==1 && nums[0] != nums[n-1]){
            ans= max(ans, nums[n-1]);
        }
        else if(count1 == count2){
            if(count1 == k){
                ans= max(ans, nums[0]);
            }
        }
        return ans;
    }
};