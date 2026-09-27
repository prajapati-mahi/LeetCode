class Solution {
public:
    bool isSameAfterReversals(int num) {
        int k= num;
        int rev=0;
        while(k>0){
            int last= k%10;
            rev= 10*rev +last;
            k= k/10;
        }
        int newrev=0;
        while(rev>0){
            int last= rev%10;
            newrev= 10*newrev +last;
            rev= rev/10;
        }
        if(num== newrev){
            return true;
        }
        return false;        
    }
};