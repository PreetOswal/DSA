class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unallocatedFruits = 0;
        for(int i=0; i<fruits.size(); i++){
            bool basketFound = false;
            for(int j=0; j<baskets.size(); j++){
                if(fruits[i] <= baskets[j]){
                    baskets[j] = -1;
                    basketFound = true;
                    break;
                }
            }
            if(!basketFound){
                unallocatedFruits++;
            }
        }
        return unallocatedFruits;
    }
};