class Solution {
public:
    int passwordStrength(string password) {
        int n= password.size();
        sort(password.begin(), password.end());
        int count=0;
        char prev= '-';
        for(int i=0; i<n; i++){
            if(password[i]== 'a' || password[i]== 'b' || password[i]== 'c' || password[i]== 'd' || password[i]== 'e' || password[i]== 'f' || password[i]== 'g' || password[i]== 'h' || password[i]== 'i' || password[i]== 'j' || password[i]== 'k' || password[i]== 'l' || password[i]== 'm' || password[i]== 'n' || password[i]== 'o' || password[i]== 'p' || password[i]== 'q' || password[i]== 'r' || password[i]== 's' || password[i]== 't' || password[i]== 'u' || password[i]== 'v' || password[i]== 'w' || password[i]== 'x' || password[i]== 'y' || password[i]== 'z'){
                if(prev == password[i]){
                    continue;
                }
                else{
                    count= count+1;
                    prev= password[i];
                }
            }
            else if(password[i]== '0'|| password[i]== '1'|| password[i]== '2'|| password[i]== '3'|| password[i]== '4'|| password[i]== '5'|| password[i]== '6'|| password[i]== '7'|| password[i]== '8'|| password[i]== '9' ){
                if(prev == password[i]){
                    continue;
                }
                else{
                    count= count+3;
                    prev= password[i];
                }
            }
            else if(password[i]=='!' || password[i]=='@' || password[i]== '#' || password[i]== '$'){
                if(prev == password[i]){
                    continue;
                }
                else{
                    count= count+5;
                    prev= password[i];
                }
            }
            else{
                if(prev == password[i]){
                    continue;
                }
                else{
                    count= count+2;
                    prev= password[i];
                }
            }
        }
        return count;
    }
};