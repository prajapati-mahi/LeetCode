class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1= s.size();
        int n2= t.size();

        stack<char> s1;
        stack<char> t1;

        for(int i=0; i<n1; i++){
            if(s[i]== '#'){
                if(s1.empty() == false){
                    s1.pop();
                }
            }
            else{
                s1.push(s[i]);
            }
        }

        for(int i=0; i<n2; i++){
            if(t[i]== '#'){
                if(t1.empty() == false){
                    t1.pop();
                }
            }
            else{
                t1.push(t[i]);
            }
        }

        int n3= s1.size();
        int n4= t1.size();

        if(n3 != n4){
            return false;
        }
        for(int j=0; j<n3; j++){
            if(s1.top() == t1.top()){
                s1.pop();
                t1.pop();
            }
            else{
                return false;
            }
        }
        return true;
    }
};