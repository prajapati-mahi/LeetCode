class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        int i=1;
        while(i<=n){
            if(i%3125 ==0){
                count= count+5;
            }
            else if(i%625 ==0){
                count= count+4;
            }
            else if(i%125 ==0){
                count= count+3;
            }
            else if(i%25 ==0){
                count= count+2;
            }
            else if(i%10 ==0){
                count++;
            }
            else if(i%5 ==0){
                count++;
            }
            i++;
        }
        return count;
    }
};