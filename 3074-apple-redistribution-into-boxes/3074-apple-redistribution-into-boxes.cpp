class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int a= apple.size();
        int c= capacity.size();

        int totalapple=0;
        for(int i=0; i<a; i++){
            totalapple+= apple[i];
        }

        sort(capacity.begin(), capacity.end());
        reverse(capacity.begin(), capacity.end());
        int i=0;
        int count=0;
        while(totalapple >0 && i<c){
            if(totalapple >capacity[i]){
                totalapple -= capacity[i];
                count++;
                i++;
            }
            else if(capacity[i]>= totalapple){
                count++;
                break;
            }
        }
        return count;
    }
};