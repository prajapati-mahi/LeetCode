class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n1= words1.size();
        int n2= words2.size();
        int ans=0;

        for(int i=0; i<n1; i++){
            int count1=0;
            for(int j=0; j<n1; j++){
                if(words1[i]== words1[j]){
                    count1++; 
                }
            }
            if(count1> 1){
                continue;
            }

            int count2=0;
            for(int j=0; j<n2; j++){
                if(words1[i]== words2[j]){
                    count2++;
                }
            }
            if(count2==1){
                ans++;
            }
        }
        return ans;
    }
};