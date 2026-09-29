class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        int low=1;
        int high=n;
        int ans=0;
        int total= ((n)*(n+1))/2;
        while(low<high){
            int mid= (low+high)/2;
            int leftsum= (mid*(mid+1))/2;
            int rightsum= total-leftsum+mid;
            if(leftsum == rightsum){
                return mid;
            }
            else if(leftsum > rightsum){
                high= high-1;
            }
            else{
                low= mid+1;
            }
        }
        return -1;
    }
};