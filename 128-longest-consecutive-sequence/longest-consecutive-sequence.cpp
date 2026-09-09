class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int longestSequence = 0;

        for(int i=0 ; i<nums.size(); i++){
            s.insert({nums[i]});
        }

        for(int i : s){
            int current = i;
            if(!s.count(current - 1)){
                int count = 1; 
                while(s.count(current + 1)){
                    count++;
                    current++;
                }
                longestSequence = max(longestSequence, count);
            }
        }

        return longestSequence;
        
    }
};