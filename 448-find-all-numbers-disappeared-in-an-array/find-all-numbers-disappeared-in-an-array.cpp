class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        while(i<nums.size()){
            int correctIdx = nums[i] - 1;

            if(nums[i] != nums[correctIdx]){

                swap(nums[i], nums[correctIdx]);

            }else{

                i++;

            }
        }

        int j=0;
        for(int i=1; i<=nums.size(); i++){
            if(nums[j] != i){
                ans.push_back(i);
            }
            j++;
        }

        return ans;
    }
};