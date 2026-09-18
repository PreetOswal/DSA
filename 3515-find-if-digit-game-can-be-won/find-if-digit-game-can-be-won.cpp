class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int aliceTotal = 0;
        int bobTotal = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 10){
                aliceTotal += nums[i];
            }else{
                bobTotal += nums[i];
            }
        }

        if(aliceTotal > bobTotal) return true;
        aliceTotal = 0, bobTotal = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 10){
                bobTotal += nums[i];
            }else{
                aliceTotal += nums[i];
            }
        }

        if(aliceTotal > bobTotal) return true;

        return false;
    }
};