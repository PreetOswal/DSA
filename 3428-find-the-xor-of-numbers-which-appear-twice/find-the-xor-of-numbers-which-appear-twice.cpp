class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {//hashmap approach
        unordered_map<int,int>m;
        for(int i :nums){
            m[i]++;
        }

        int ans = 0;
        for(auto & it : m){
            if(it.second == 2){
                ans = ans ^ it.first;
            }
        }

        return ans;
    }
};