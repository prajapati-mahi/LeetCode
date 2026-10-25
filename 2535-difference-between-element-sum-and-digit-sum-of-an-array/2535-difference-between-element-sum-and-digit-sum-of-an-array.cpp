class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n= nums.size();
        int elesum=0;
        int digisum=0;

        for(int i=0; i<n; i++){
            elesum += nums[i];
            int k=nums[i];
            while(k>0){
                int last= k%10;
                digisum += last;
                k= k/10;
            }
        }
        return elesum- digisum;
    }
};