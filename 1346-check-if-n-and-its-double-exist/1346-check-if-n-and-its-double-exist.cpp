class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n= arr.size();
        if(n==1){
            return false;
        }
        sort(arr.begin(), arr.end());
        int i=0;
        int j=1;

        for(int i=0; i<n; i++){
            int target = arr[i] * 2;
            int left = 0;
            int right = n - 1;
            while(left <= right) {
                int mid = left + (right - left) / 2;
                if(arr[mid] == target && mid != i) {
                    return true;
                } 
                else if(arr[mid] < target) {
                    left = mid + 1;
                } 
                else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};