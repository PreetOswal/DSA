class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {//total = 2*(unique number) + outlier;
        int totalSum = 0;
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            totalSum = totalSum + nums[i];
            m[nums[i]]++;
        }

        //considering each number as unique Number we try to find the outlier using map.
        int ans = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]--;
            int outlierPossible = totalSum - (2*nums[i]);
            if(m[outlierPossible] > 0){
                ans = max(ans, outlierPossible);
            }
            m[nums[i]]++;
        }

        return ans;

    }
};