class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n= nums.size();
        int count=0;

        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                int a=0;
                if(nums[i] <10){
                    a= nums[i];
                }
                else{
                    int k= nums[i];
                    int last= k;
                    while(k>=10){
                        last= k%10;
                        k= k/10;
                    }
                    a= k;
                }
                int b= nums[j]%10;

                if(gcd(a,b)==1){
                    count++;
                }
            }
        }
        return count;
    }
};