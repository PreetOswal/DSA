class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j = 10; j<=100000 ;){
                int end = (j * 10) - 1;
                if(j == 100000 && nums[i] == j){
                    count++;
                    return count;
                }
                if(nums[i] >= j && nums[i] <= end) count++;
                j = j*100;
            }
        }

        return count;
    }
};