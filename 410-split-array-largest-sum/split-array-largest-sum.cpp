class Solution {
public:

    bool isPossible(vector<int>&nums, int k, int maxAllowed){
        int init = 1, allowed = 0;
        for(int i=0; i<nums.size(); i++){

            if(nums[i] > maxAllowed) return false;

            if(nums[i] + allowed <= maxAllowed){
                allowed = allowed + nums[i];
            }else{
                init++;
                allowed = nums[i];
            }

        }
        if(init > k) return false;

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int st = 1, end = 0; 
        for(int i=0; i<nums.size(); i++){
            end = end + nums[i];
        }

        int ans = 0;
        while(st<=end){
            int mid = st + (end - st) /2;

            if(isPossible(nums, k, mid)){
                ans = mid;
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }

        return ans;
    }
};