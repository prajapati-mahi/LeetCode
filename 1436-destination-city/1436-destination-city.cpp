class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n= paths.size();

        string first= paths[0][0];
        string next= paths[0][1];

        while(true) {
            bool found = false;
            for(int i = 0; i < n; i++) {
                if(paths[i][0] == next) {
                    next = paths[i][1];
                    found = true;
                    break; 
                }
            }
            if(!found) {
                break;
            }
        }
        return next;
    }
};