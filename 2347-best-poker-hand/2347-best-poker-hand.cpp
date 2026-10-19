class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int n= ranks.size();
        sort(ranks.begin(), ranks.end());
        
        int count=1;
        for(int i=0; i<n-1; i++){
            if(suits[i]== suits[i+1]){
                count++;
            }
        }
        if(count >4){
            return "Flush";
        }

        int a=1;
        int maxi=INT_MIN;
        for(int i=0; i<n-1; i++){
            if(ranks[i]== ranks[i+1]){
                a++;
                maxi= max(maxi, a);
            }
            else{
                a=1;
            }
        }

        if(maxi>=3){
            return "Three of a Kind";
        }
        else if(maxi==2){
            return "Pair";
        }
        return "High Card";
    }
};