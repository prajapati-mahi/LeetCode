class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        
        int diff=0;
        int sum=0;
        int mini= INT_MAX;
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k= j+1; k<n; k++){
                    sum= nums[i]+ nums[j]+ nums[k];
                    if(sum == target){
                        return sum;
                    }
                    else{
                        if(sum> target){
                            diff= sum-target;
                            if(diff<mini){
                                mini= diff;
                                ans= sum;
                            }
                        }
                        else{
                            diff= target-sum;
                            if(diff<mini){
                                mini= diff;
                                ans= sum;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};