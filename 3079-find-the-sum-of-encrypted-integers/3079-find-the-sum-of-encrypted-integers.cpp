class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            int k=nums[i];
            int maxi=0;
            int count=0;
            while(k>0){
                int last= k%10;
                count++;
                maxi= max(maxi, last);
                k= k/10;                
            }
            while(count>0){
                sum+= pow(10, count-1)* maxi;
                count--;
            }
        }
        return sum;        
    }
};