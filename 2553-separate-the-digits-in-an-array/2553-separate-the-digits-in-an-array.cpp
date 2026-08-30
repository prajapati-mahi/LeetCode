class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n= nums.size();

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i] <10){
                ans.push_back(nums[i]);
            }
            else if(nums[i]<100){
                ans.push_back(nums[i]/10);
                ans.push_back(nums[i]%10);
            }
            else if(nums[i]<1000){
                ans.push_back(nums[i]/100);
                ans.push_back((nums[i]/10)%10);
                ans.push_back(nums[i]%10);
            }
            else if(nums[i]<10000){
                ans.push_back(nums[i]/1000);
                ans.push_back((nums[i]/100)%10);
                ans.push_back((nums[i]/10)%10);
                ans.push_back(nums[i]%10);
            }
            else if(nums[i]< 100000){
                ans.push_back(nums[i]/10000);
                ans.push_back((nums[i]/1000)%10);
                ans.push_back((nums[i]/100)%10);
                ans.push_back((nums[i]/10)%10);
                ans.push_back(nums[i]%10);
            }
            else{  
                ans.push_back(nums[i]/100000);
                ans.push_back((nums[i]/10000)%10);
                ans.push_back((nums[i]/1000)%10);
                ans.push_back((nums[i]/100)%10);
                ans.push_back((nums[i]/10)%10);
                ans.push_back(nums[i]%10);
            }
        }
        return ans;
    }
};