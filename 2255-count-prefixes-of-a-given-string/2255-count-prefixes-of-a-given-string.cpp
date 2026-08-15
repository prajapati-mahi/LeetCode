class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n= words.size();
        int l= s.size();

        int count=0;

        for(string& word : words){
            if(s.find(word) == 0){
                count++;
            }
        }
        return count;
    }
};