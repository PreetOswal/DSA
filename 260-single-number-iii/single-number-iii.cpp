class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorAll = 0;
        for(int i=0; i<nums.size(); i++){
            xorAll = xorAll ^ nums[i];
        }

        long long bit = xorAll & (-xorAll);
        int firstNum=0;
        int secondNum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] & bit){
                firstNum = firstNum ^ nums[i]; 
            }else{
                secondNum = secondNum ^ nums[i];
            }
        }

        return {firstNum, secondNum};
    }
};