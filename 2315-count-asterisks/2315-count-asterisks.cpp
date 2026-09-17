class Solution {
public:
    int countAsterisks(string s) {
        int n= s.size();
        int count =0;
        int bar=0;
        for(int i=0; i<n; i++){
            if(s[i]== '*' && bar%2 ==0){
                count++;
            }
            else if(s[i]== '|'){
                bar++;
            }
        }
        return count;
    }
};