class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n= distance.size();
        int sum=0;

        int first=0;
        if(start > destination){
            int temp= start;
            start= destination;
            destination= temp;
        }
        for(int i=0; i<n; i++){
            sum+= distance[i];
            if(i == start){
                first += distance[i];
            }
            else if( i>start && i<destination){
                first += distance[i];
            }
        }
        int second= sum-first;

        if(first >second){
            return second;
        }
        else{
            return first;
        }
    }
};