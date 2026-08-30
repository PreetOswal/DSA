class Solution {
public:
    int sumOfUnique(vector<int>& nums) {//O(N^2) solution
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            bool isCopy = false;
            for(int j=0; j<nums.size(); j++){
                if(i==j) continue;
                if(nums[i] == nums[j]){
                    isCopy = true;
                }
            }
            if(!isCopy){
                sum = sum + nums[i];
            }
        }

        return sum;
    }
};
