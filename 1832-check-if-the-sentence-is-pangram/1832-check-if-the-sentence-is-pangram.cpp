class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n= sentence.size();
        if(n<26){
            return false;
        }
        sort(sentence.begin(), sentence.end());
        set<char> word;
        for(int i=0; i<n; i++){
            word.insert(sentence[i]);
        }
        int n2= word.size();
        if(n2<26){
            return false;
        }
        return true;
    }
};