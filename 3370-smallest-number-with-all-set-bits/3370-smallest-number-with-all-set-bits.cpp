class Solution {
public:
    int smallestNumber(int n) {
    //     int count=0;
    //     int i=n;
    //     while(){
    //         int k=i%2;
    //         if(k==0){
    //             i++;
    //             break;
    //         }
    //         else{

    //         }
    //         i= i/2;

    //     }
    //     return i;
    // }
        if(n==1){
            return 1;
        }
        else if(n<=3){
            return 3;
        }   
        else if(n<=7){
            return 7;
        }
        else if(n<=15){
            return 15;
        }
        else if(n<=31){
            return 31;
        }
        else if(n<=63){
            return 63;
        }
        else if(n<=127){
            return 127;
        }
        else if(n<=255){
            return 255;
        }
        else if(n<=511){
            return 511;
        }
        else{
            return 1023;
        }
    }
};