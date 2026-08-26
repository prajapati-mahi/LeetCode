class Solution {
public:
    int minimumChairs(string s) {
        int n= s.size();
        int count=0;
        int maxi=1;

        for(int i=0; i<n; i++){
            if(s[i]=='E'){
                count++;
                maxi= max(maxi, count);
            }
            else{
                count--;
            }
        }
        return maxi;
    }
};