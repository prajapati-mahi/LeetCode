class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1){
            return {0};
        }
        if(n==2){
            return {-1, 1};
        }
        vector<int> ans;
        int i=1;
        while(i <= n/2){
            ans.push_back(i);
            ans.push_back(i*-1);
            i++;
        }
        if(n%2 !=0){
            ans.push_back(0);
        }
        return ans;
    }
};