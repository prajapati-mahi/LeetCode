class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol= (long long)length*width*height;

        int b=0;
        int h=0;

        if(length >=10000 || width >=10000 || height >=10000){
            b=1;
        }
        if(vol >= 1000000000){
            b=1;
        }
        if(mass >=100){
            h=1;
        }

        if(b==1 && h==1){
            return "Both";
        }
        else if(b==0 && h==0){
            return "Neither";
        }
        else if(b==1 && h==0){
            return "Bulky";
        }
        else{
            return "Heavy";
        }
    }
};