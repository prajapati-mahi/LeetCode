class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return 0;
        }
        int res=0;
        int k=n;
        int bitpost=0;

        while(k>0){
            int last = k % 2;
            
            int comp;
            if(last == 1) {
                comp = 0;
            } 
            else {
                comp = 1;
            }
            res += comp * pow(2, bitpost);
            
            k = k / 2;
            bitpost++;
        }  
        return res;           
    }
};