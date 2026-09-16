class Solution {
public:
    string convertToBase7(int num) {
        int k= num;
        int neg=0;
        if(k<0){
            k= -1*k;
            neg=1;
        }
        string res="";
        while(k>0){
            int last= k%7;
            res= to_string(last) + res;
            k= k/7;
        }
        if (res == "") res = "0";          
        if (neg == 1) {
            res = "-" + res;  
        }
        return res;
    }
};