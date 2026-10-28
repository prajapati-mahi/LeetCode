class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1= arr1.size();
        int n2= arr2.size();

        int ans=0;

        for(int i=0; i<n1; i++){
            int count=0;
            for(int j=0; j<n2; j++){
                int diff= arr1[i]- arr2[j];
                if(diff <0){
                    diff= diff*(-1);
                }

                if(d>= diff){
                    count++;
                }
            }
            if(count ==0){
                ans++;
            }
        }
        return ans;
    }
};