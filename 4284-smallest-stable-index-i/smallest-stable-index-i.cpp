class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maximum = INT_MIN;
        vector<int>suffixMin(nums.size());
        suffixMin[nums.size() - 1] = nums[nums.size() - 1];

        for(int i=nums.size()-2; i>=0; i--){
            suffixMin[i] = min(suffixMin[i+1], nums[i]);
        }

        for(int i=0; i<nums.size(); i++){

            maximum = max(maximum, nums[i]);

            if(maximum - suffixMin[i] <= k) return i; 
        }

        return -1;
    }
};