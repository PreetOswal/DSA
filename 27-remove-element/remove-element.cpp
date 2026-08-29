class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int k=0;
        for(int j=0; j<nums.size();){
            if(nums[i] == val && nums[j] != val){
                swap(nums[i], nums[j]);
                i++,k++;
            }else if(nums[i] != val && nums[j] != val) i++,k++;
            j++;
        }

        return k;
    }
};