class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]{0};
        int ans = 0;
        int left = 0, right = 0;

        while(right < s.length()){

            if(freq[s[right]] == 0){
                freq[s[right]]++;
                ans = max(ans, right - left + 1);
                right++;
            }else{
                freq[s[left]]--;
                left++;
            }
            
        }
        

        return ans;
    }
};