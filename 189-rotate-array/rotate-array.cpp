class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>res;
        if(k>nums.size()){
            k = k%nums.size();
        }
        int newK = k;
        while(k>0){
            res.push_back(nums[nums.size() - k]);
            k--;
        }

        for(int i=0; i<nums.size()-newK; i++){
            res.push_back(nums[i]);
        }
    
    nums = res;
    }
};