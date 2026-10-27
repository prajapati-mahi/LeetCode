class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n= dimensions.size();
        int diagonal=0;
        int maxi=0;
        for(int i=0; i<n; i++){
            double k= dimensions[i][0]* dimensions[i][0];
            double l= dimensions[i][1]* dimensions[i][1];

            double d= k+l;
            //d= pow(d, 0.5);

            if (d> diagonal){
                diagonal = d;
                maxi = dimensions[i][0]* dimensions[i][1]; 
            } 
            else if (d == diagonal){
                maxi = max(maxi, dimensions[i][0]* dimensions[i][1]);
            }
        }

        return maxi;
    }
};