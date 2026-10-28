class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n1= target.size();
        int n2= arr.size();

        if(n1 != n2){
            return false;
        }

        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        for(int i=0; i<n1; i++){
            if(target[i] != arr[i]){
                return false;
            }
        }
        return true;
    }
};