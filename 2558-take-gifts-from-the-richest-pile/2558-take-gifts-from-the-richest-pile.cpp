class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n= gifts.size();

        int count=0;
        
        while(count<k){
            sort(gifts.begin(), gifts.end());
            //ans += pow(gifts[n-1], 0.5);
            gifts[n-1]= pow(gifts[n-1], 0.5);
            count++;
        }
        long long ans=0;
        for(int i=0; i<n; i++){
            ans += gifts[i];
        }
        return ans;
    }
};