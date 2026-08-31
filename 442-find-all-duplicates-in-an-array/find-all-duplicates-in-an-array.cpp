class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            while(i != nums[i] -1 && nums[i] != nums[nums[i] - 1]){
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        int j=1;
        for(int i=0; i<nums.size();i++){
            if(j != nums[i]){
                ans.push_back(nums[i]);
            }
            j++;
        }

        return ans;
    }
};