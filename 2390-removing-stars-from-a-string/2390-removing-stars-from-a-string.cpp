class Solution {
public:
    string removeStars(string s) {
        int n= s.size();
        string result= "";

        for(int i=0; i<n; i++){
            if(s[i]== '*'){
                if(result.empty()== false){
                    result.pop_back();
                }
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};