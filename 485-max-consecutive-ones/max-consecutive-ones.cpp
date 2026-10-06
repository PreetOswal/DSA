class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int maxConsequtive = 0;
        int currConsequtive = 0;
        while(i < nums.size()){
            if(nums[i] == 1){
                currConsequtive++;
            }else{
                maxConsequtive = max(maxConsequtive, currConsequtive);
                currConsequtive = 0;
            }
            i++;
        }
        maxConsequtive = max(maxConsequtive, currConsequtive);

        return maxConsequtive;
    }
};