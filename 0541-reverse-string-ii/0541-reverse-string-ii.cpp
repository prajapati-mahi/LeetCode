class Solution {
public:
    string reverseStr(string s, int k) {
        if(k==1){
            return s;
        }
        int n= s.size();
        if(k>n){
            reverse(s.begin(), s.end());
            return s;
        }
        int count=0;
        int i=0;
        int j=i+k-1;
        for(int l=0; l<n; l++){
            if(count ==0){
                int left=i;
                int right= j;
                while(left<right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                count= count+k;
            }
            else if(count == 2*k){
                i= j+k+1;
                j= i+k-1;
                if(j>n-1){
                    int left = i;
                    int right = n - 1;
                    while(left < right){
                        swap(s[left], s[right]);
                        left++;
                        right--;
                    }
                    break;
                }
                count=0;
                
            }
            else{
                count++;
            }
        }
        return s;
    }
};