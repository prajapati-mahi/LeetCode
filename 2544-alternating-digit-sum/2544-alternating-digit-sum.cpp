class Solution {
public:
    int alternateDigitSum(int n) {
        int k=n;
        int sumodd=0;
        int sumeven=0;
        int bit=0;
        int count=0;

        while(k>0){
            int last= k%10;
            if(bit==0){
                sumodd +=last;
                bit=1;
            }
            else{
                sumeven += last;
                bit=0;
            }
            k=k/10;
            count++;
        }
        if(count%2==0){
            return sumeven- sumodd;
        }
        return sumodd-sumeven;
    }
};