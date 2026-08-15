class Solution {
public:
    string reverseByType(string s) {
        int n= s.size();
        if(n==1){
            return s;
        }

        int i=0;
        int j=n-1;

        while(i<j){
            if(isalpha(s[i])){
                if(isalpha(s[j])){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
        int k=0;
        int l= n-1;
        while(k<l){
            if(!isalpha(s[k])){
                if(!isalpha(s[l])){
                    swap(s[k], s[l]);
                    k++;
                    l--;
                }
                else{
                    l--;
                }
            }
            else{
                k++;
            }
        }
        return s;
    }
};