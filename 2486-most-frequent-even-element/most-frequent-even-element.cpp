class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 ==0){
                m[nums[i]]++;
            }
        }

        int maxFreq = INT_MIN;
        for(auto it : m){
            if(it.second > maxFreq){
                maxFreq = it.second;
                ans = it.first;
            }else if(it.second == maxFreq){
                ans = min(ans, it.first);
            }
        }
        if(m.empty()) return -1;

        return ans;
    }
};