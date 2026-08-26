class Solution {
public:
    
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }

        int freq[26] = {};

        for(char c : s){
            freq[c - 'a']++;
        }

        for(char c : t){
            freq[c - 'a']--;
        }

        for(int x : freq){
            if(x!=0){
                return false;
            }
        }

        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        for(string word : words){
            if(ans.empty() || !isAnagram(ans.back(),word)){
                ans.push_back(word);
            }
        }

        return ans;
    }
};