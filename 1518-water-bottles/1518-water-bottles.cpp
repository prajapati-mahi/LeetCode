class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        while(numBottles >= numExchange){
            int last= numBottles/ numExchange;
            int left= numBottles - (numExchange *last);
            count+= last;
            numBottles=  last+ left;
        }
        return count;
    }
};