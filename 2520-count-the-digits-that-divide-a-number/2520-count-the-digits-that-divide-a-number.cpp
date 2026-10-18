class Solution {
public:
    int countDigits(int num) {
        int k= num;
        int count=0;
        while(k>0){
            int last= k%10;
            if(num% last ==0){
                count++;
            }
            k= k/10;
        }
        return count;
    }
};