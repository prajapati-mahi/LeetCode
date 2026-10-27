class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n= s.size();
        int zero=0;
        int one=0;

        for(int i=0;  i<n; i++){
            if(s[i]== '0'){
                zero++;
            }
            else{
                one++;
            }
        }
        if(one ==0 || zero==0){
            return s;
        }
        string ans= "";

        for(int i=0; i<n; i++){
            if(i== n-1){
                ans = ans+ '1';
            }
            else if(one ==1){
                ans= ans + '0';
                zero--;
            }
            else if(one !=1){
                ans = ans+ '1';
                one--;
            }
        }
        return ans;
    }
};