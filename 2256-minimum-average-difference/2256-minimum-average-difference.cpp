class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n= nums.size();
        long long sum=0;
        int idx=0;
        
        int mini= INT_MAX;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }
        long long ls=0;
        int la=0;
        int ra=0;
        long long rs=0;
        int count=0;
        int i=0;
        int diff=0;
        while(i<n){
            ls= ls+nums[i];
            count++;
            rs= sum- ls;
            la= ls/count;
            if(n== count){
                ra=0;
            }
            else{
                ra= rs/(n-count);
            }
            
            if(la> ra){
                diff= la-ra;
                if(diff <mini){
                    mini= diff;
                    idx=i;
                }
            }
            else{
                diff= ra-la;
                if(diff==0){
                    return i;
                }
                else if(diff <mini){
                    mini= diff;
                    idx=i;
                }
            }
            i++;
        }
        return idx;
    }
};