class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n= tops.size();
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;
        int count5=0;
        int count6=0;
        for(int i=0; i<n; i++){
            if(tops[i]==1 || bottoms[i]==1){
                count1++;
            }
            if(tops[i]==2 || bottoms[i]==2){
                count2++;
            } 
            if(tops[i]==3 || bottoms[i]==3){
                count3++;
            }
            if(tops[i]==4 || bottoms[i]==4){
                count4++;
            }
            if(tops[i]==5 || bottoms[i]==5){
                count5++;
            }
            if(tops[i]==6 || bottoms[i]==6){
                count6++;
            }           
        }
        int ans= 0;
        if(count1 >= count2 && count1 >= count3 && count1 >= count4 && count1 >= count5 && count1 >= count6){
            ans=1;
        }
        else if(count2 >= count1 && count2 >= count3 && count2>= count4 && count2 >= count5 && count2 >= count6){
            ans=2;
        }
        else if(count3 >= count2 && count3 >= count1 && count3 >= count4 && count3 >= count5 && count3 >= count6){
            ans=3;
        }
        else if(count4 >= count2 && count4 >= count3 && count4 >= count1 && count4 >= count5 && count4 >= count6){
            ans=4;
        }
        else if(count5 >= count2 && count5 >= count3 && count5 >= count4 && count5 >= count1 && count5 >= count6){
            ans=5;
        }
        else{
            ans=6;
        }
        int c=0;
        int k=0;
        for(int i=0; i<n; i++){
            if(tops[i] != ans && bottoms[i] != ans){
                return -1;
            }
            if(tops[i]== ans && bottoms[i] != ans){
                k++;
            }
            if(bottoms[i]== ans && tops[i] != ans){
                c++;
            }
        }
        int res= min(k,c);
        if(k==c){
            return k;
        }
        return res;
    }
};