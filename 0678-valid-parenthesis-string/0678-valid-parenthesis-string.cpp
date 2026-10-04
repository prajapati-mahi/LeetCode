class Solution {
public:
    bool checkValidString(string s) {
        if(s.size()== 1){
            return s[0]== '*';
        }
        int countl=0;
        int countr=0;
        //int star=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                countl++;
                countr++;
            }
            else if(s[i]== ')'){
                countr--;
                countl--;
            }
            else{
                countl--;
                countr++;
            }
            if(countr<0){
                return false;
            }
            else if(countl <0){
                countl=0;
            }
        }
        
        return countl ==0;        
    }
};