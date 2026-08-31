class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n= text.size();
        if(n<7){
            return 0;
        }
        sort(text.begin(), text.end());
        int i=0;
        long long counta=0;
        long long countb=0;
        long long countl=0;
        long long counto=0;
        long long countn=0;

        while(i<n){
            if(text[i] >'o'){
                break;
            }
            if(text[i]== 'a'){
                counta++;
            }
            else if(text[i]== 'b'){
                countb++;
            }
            else if(text[i]== 'l'){
                countl++;
            }
            else if(text[i]== 'n'){
                countn++;
            }
            else if(text[i]== 'o'){
                counto++;
            }
            i++;
        }
        countl= countl/2;
        counto= counto/2;

        int ans= min(counta, min(countb, min(countl, min(counto, countn))));
        return ans;
    }
};