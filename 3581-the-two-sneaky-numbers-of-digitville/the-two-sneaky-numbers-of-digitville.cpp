class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(), nums.end());

        int currNum = nums[0], count = 1;
        for(int i=1; i<nums.size(); i++){
            if(currNum == nums[i]){
                count++;
                if(count == 2) ans.push_back(nums[i]);
            }else{
                count = 1;
                currNum = nums[i];
            }
        }

        return ans;

    }
};