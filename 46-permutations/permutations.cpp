class Solution {
public:

    void allPermutations(vector<int>&nums,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(nums);
        }

        for(int i =idx ; i<nums.size(); i++){
            swap(nums[i], nums[idx]);
            allPermutations(nums, ans, idx + 1);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        allPermutations(nums, ans, 0);

        return ans;
    }
};