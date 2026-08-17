class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();

        if(k==n){
            int sum=0;
            for(int i=0; i<n; i++){
                sum += cardPoints[i];
            }
            return sum;
        }
        
        int lsum=0;
        int rsum=0;

        for(int i=0; i<k; i++){
            lsum += cardPoints[i];
        }
        int maxsum= lsum;
        int right= n-1;
        for(int i=k-1; i>=0; i--){
            lsum= lsum-cardPoints[i];
            rsum= rsum+ cardPoints[right];
            right--;
            maxsum= max(maxsum, rsum+lsum);
        }
        return maxsum;
    }
};