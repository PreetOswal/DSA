class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26];
        fill(freq, freq+26,2);
        for(int i=0; i<s.length(); i++){
            freq[s[i] - 'a']--;

            if(freq[s[i] - 'a'] == 0) return s[i];
        }

        return 'a';
    }
};