class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        int freqOfBalloon[26]{};
        for(int i=0; i<s.length(); i++){
            freqOfBalloon[s[i] - 'a']++;
        }
        
        int freq[26]{};
        for(int i=0; i<text.length(); i++){
            freq[text[i] - 'a']++;
        }

        int minNoOfBalloons = INT_MAX;
        for(int i=0; i<s.length(); i++){
            int ans = freq[s[i] - 'a'] / freqOfBalloon[s[i] - 'a'];
            minNoOfBalloons = min(minNoOfBalloons, ans);
        }

        return minNoOfBalloons;
    }
};