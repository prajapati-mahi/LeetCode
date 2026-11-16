class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1= s1.size();
        int n2= s2.size();

        if(n1 != n2){
            return false;
        }
        if(s1 == s2){
            return true;
        }
        
        for(int i=0; i<n1; i++){
            for(int j=i+1; j<n1; j++){
                swap(s1[i], s1[j]);
                string k= s1;
                if(s1 == s2){
                    return true;
                }
                swap(s1[i], s1[j]);
            }
        }
        return false;
    }
};