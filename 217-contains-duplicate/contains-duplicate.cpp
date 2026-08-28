class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>numberSet;
        for(int i=0; i<nums.size(); i++){
            if(numberSet.find(nums[i]) != numberSet.end()){
                return true;
            }else{
                numberSet.insert(nums[i]);
            }
        }

        return false;
    }
};