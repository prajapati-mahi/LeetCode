class Solution {
public:
    bool checkZeroOnes(string s) {
        int n= s.size();

        int one=0;
        int zero=0;
        int maxone=INT_MIN;
        int maxzero= INT_MIN;
        int prev=s[0];
        for(int i=0; i<n; i++){
            if(s[i]== '1' && prev== '1'){
                one++;
                maxone= max(maxone, one);
            }
            else if(s[i]== '0' && prev== '0'){
                zero++;
                maxzero= max(maxzero, zero);
            }
            else if(s[i]== '0' && prev== '1'){
                zero=1;
                maxzero= max(maxzero, zero);
                prev= '0';
            }
            else if(s[i]== '1' && prev== '0'){
                one=1;
                maxone= max(maxone, one);
                prev= '1';
            }
        }
        if(maxone > maxzero){
            return true;
        }
        return false;
    }
};