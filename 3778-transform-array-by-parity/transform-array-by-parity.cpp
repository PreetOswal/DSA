class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
       for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 ==0){
                nums[i] = 0;
            }else{
                nums[i] = 1;
            }
       }

        int low =0;
        int high = nums.size() - 1;

        while(low < high){
            if(nums[low] == 0){
                low++;
            }else if(nums[high] == 1){
                high--;
            }else{
                swap(nums[low],nums[high]);
                low++;
                high--;
            }
        }

        return nums;
    }
};