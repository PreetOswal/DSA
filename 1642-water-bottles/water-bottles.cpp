class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalNumberOfBottles = numBottles;
        int leftOvers = 0;
        int totalLeftOvers = 0;
        while(numBottles >= numExchange){
            leftOvers = numBottles % numExchange;
            numBottles = numBottles / numExchange;
            totalNumberOfBottles = totalNumberOfBottles + numBottles;
            numBottles = numBottles + leftOvers;
        }

        return totalNumberOfBottles;
    }
};