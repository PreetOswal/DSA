class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int maxDrunk = numBottles;
        int emptyBottles = numBottles;
        numBottles = 0;
        while(emptyBottles >= numExchange){
            numBottles++;
            emptyBottles = emptyBottles - numExchange;
            numExchange++;
            if(emptyBottles < numExchange){
                maxDrunk = maxDrunk + numBottles;
                emptyBottles = emptyBottles + numBottles;
                numBottles = 0;
            }
        }

        return maxDrunk;
    }
};