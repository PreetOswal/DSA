class Solution {
public:
    int singleNumber(vector<int>& nums) {//O(N^2)
        bool c=false;
        for(int i=0 ;i<nums.size() ; i++){
            c=false;
            for(int j = 0 ; j<nums.size()-1; j++){
                if(i==j){
                    j++;
                }
                if(nums[i]==nums[j]){
                    c=true;
                    break;
                }
            }
            if(c==false){
                return nums[i];
            }
        }
        return 0;
    }
};
