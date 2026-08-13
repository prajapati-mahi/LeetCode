#include <bits/stdc++.h>
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n1= allowed.size();
        set<char> allow;
        for(int i=0; i<n1; i++){
            allow.insert(allowed[i]);
        }
        int count=0;
        int n2= words.size();
        for(int l=0; l<n2; l++){
            bool flag= true;
            for(int k=0; k<words[l].size(); k++){
                if(allow.find(words[l][k]) == allow.end()){
                    flag= false;
                    break;
                }
            }
            if(flag == true){
                count++;
            }
        }
        return count;
    }
};