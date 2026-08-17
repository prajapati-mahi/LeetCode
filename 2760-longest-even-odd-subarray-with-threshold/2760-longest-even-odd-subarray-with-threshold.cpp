class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n= nums.size();

        int prev=-1;
        int left=-1;
        int ans=0;
        int count=0;
        if(n==1 && nums[0]%2 !=0){
            return 0;
        }
        if(n==1 && nums[0]%2 ==0 && nums[0]> threshold){
            return 0;
        }
        if(n==1 && nums[0]%2 ==0 && nums[0]<= threshold){
            return 1;
        }
        for(int i=0; i<n; i++){
            if(nums[i]<=threshold){
                if(nums[i]%2 ==0 && left ==-1){
                    if(i+1 <n){
                        if(nums[i+1]%2 !=0){
                            left= nums[i];
                            count++;
                            prev= left;
                            ans= max(ans, count);
                        }
                        else{
                            left= nums[i];
                            count=1;
                            prev= left;
                            ans= max(ans, count);

                        }
                    }
                    else if(i==n-1){
                        left= nums[i];
                        count++;
                        prev= left;
                        ans= max(ans, count);
                    }
                }
                else if(nums[i]%2==0 && prev%2 ==1){
                    count++;
                    ans= max(ans, count);
                    prev= nums[i];
                }
                else if(nums[i]%2 !=0 && prev%2==0){
                    count++;
                    ans= max(ans, count);
                    prev= nums[i];
                }
                else{
                    count=0;
                    if(nums[i]%2 == 0){
                        count = 1;
                        left = nums[i];
                        prev = left;
                        ans = max(ans, count);
                    } 
                    else{
                        left = -1;
                        prev = -1;
                    }
                }
            }
            else{
                count=0;
                left= -1;
                prev=-1;
            }
        }
        return ans;
    }
};