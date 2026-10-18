class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        int i= target;

        if(maxDoubles==0){
            return target-1;
        }
        while(i>1){
            if(i% 2==0){
                if(maxDoubles >0){
                    maxDoubles--;
                    i= i/2;
                }
                else{
                    i--;
                }
                count++;
            }
            else{
                i--;
                count++;
            }
        }
        return count;
    }
};