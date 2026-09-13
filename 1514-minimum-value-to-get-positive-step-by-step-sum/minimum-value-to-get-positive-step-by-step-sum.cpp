class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1; ;i++){
            bool isFound = true;
            int sum = i;
            for(int j=0;j<nums.size(); j++){
                sum = sum + nums[j];
                if(sum<1){
                    isFound = false;
                    break;
                }
            }
            if(isFound){
                return i;
            }
        }
        return 0;
    }
};