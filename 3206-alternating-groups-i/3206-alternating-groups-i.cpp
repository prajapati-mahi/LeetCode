class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n= colors.size();

        int count=0;
        for(int i=1; i<n-1; i++){
            if(colors[i-1]== colors[i+1]){
                if(colors[i-1] != colors[i]){
                    count++;
                }
            }
        }
        if(colors[n-2] == colors[0]){
            if(colors[n-2] != colors[n-1]){
                count++;
            }
        }
        if(colors[n-1] == colors[1]){
            if(colors[n-1] != colors[0]){
                count++;
            }
        }
        return count;
    }
};