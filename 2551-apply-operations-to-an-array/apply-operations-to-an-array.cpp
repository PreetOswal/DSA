class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int j=0; j<nums.size() -1; j++){
            if(nums[j] == nums[j+1]){
                nums[j] = nums[j] * 2;
                nums[j+1] = 0;
            }
        }

        int i=0;
        for(int j=0; j<nums.size();){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i] ,nums[j]);
                i++;
            }if(nums[i] != 0) i++;
            j++;
        }

        return nums;
    }
};