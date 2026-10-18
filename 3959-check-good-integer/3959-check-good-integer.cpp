class Solution {
public:
    bool checkGoodInteger(int n) {
        int k= n;

        int sum=0;
        int square=0;
        while(k>0){
            int last= k%10;
            sum += last;
            square+= last*last;
            k= k/10;
        }
        if(square- sum >=50){
            return true;
        }
        return false;
    }
};