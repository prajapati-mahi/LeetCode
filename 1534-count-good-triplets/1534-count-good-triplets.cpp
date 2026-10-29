class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n= arr.size();
        int count =0;
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                for(int t= j+1; t<n; t++){
                    int k= arr[i]- arr[j];
                    int l= arr[j]- arr[t];
                    int m= arr[i]- arr[t];
                    if(k<0){
                        k= (-1)*k;
                    }
                    if(l<0){
                        l= (-1)*l;
                    }
                    if(m<0){
                        m= (-1)*m;
                    }

                    if(k <=a && l <=b && m<=c){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};