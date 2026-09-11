class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n= arr.size();
        int ans=-1;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(arr[j]== arr[i]){
                    count++;
                }
            }
            if(count == arr[i]){
                ans= count;
            }
        }

        return ans;
    }
};