class Solution {
public:
    int maxPower(string s) {
        int n= s.size();
        int count=1;
        int maxi= 1;

        for(int i=0; i<n-1; i++){
            if(s[i]== s[i+1]){
                count++;
                maxi= max(count, maxi);
            }
            else{
                count=1;
            }
        }
        return maxi;
    }
};