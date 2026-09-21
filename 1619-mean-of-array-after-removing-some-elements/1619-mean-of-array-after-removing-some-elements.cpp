class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n= arr.size();
        int small= (n*5)/100;

        int sum=0;
        int count= n- 2*small;

        for(int i=small; i<n- small; i++){
            sum += arr[i];
        }
        double ans= (double)sum/count;

        return ans;
    }
};