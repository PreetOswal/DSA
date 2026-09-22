class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int correctIdx = nums[i];

            if(correctIdx < nums.size() && nums[i] != nums[correctIdx]){
                swap(nums[i], nums[correctIdx]);
            }else{
                i++;
            }
        }

        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[j] != i){
                return i;
            }
            j++;
        }

        return nums.size();
    }
};