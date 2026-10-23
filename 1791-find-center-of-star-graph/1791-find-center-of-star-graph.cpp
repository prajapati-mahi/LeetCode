class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n= edges.size();

        int ans1= edges[0][0];
        int ans2= edges[0][1];

        int count=0;
        for(int i=0; i<n; i++){
            if(edges[i+1][0]== ans1 || edges[i+1][1] == ans1){
                return ans1;
            }
            else{
                return ans2;
            }
        }
        return 0;
    }
};