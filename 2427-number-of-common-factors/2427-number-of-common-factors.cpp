class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> factora;
        vector<int> factorb;

        for(int i=1; i<=a; i++){
            if(a%i ==0){
                factora.push_back(i);
            }
        }
        for(int i=1; i<=b; i++){
            if(b%i ==0){
                factorb.push_back(i);
            }
        }
        int count=0;
        int n= factora.size();
        int m= factorb.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(factora[i]== factorb[j]){
                    count++;
                }
            }
        }
        return count;
    }
};