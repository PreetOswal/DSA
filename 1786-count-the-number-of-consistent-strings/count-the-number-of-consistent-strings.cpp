class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool freq[26]{};
        int count = 0;
        for(int i=0; i<allowed.length(); i++){
            freq[allowed[i] - 'a'] = true;
        }

        for(int i=0; i<words.size(); i++){
            bool countIncrease = true;
            for(int j=0; j<words[i].length(); j++){
                if(freq[words[i][j] - 'a'] == false){
                    countIncrease = false;
                    break;
                }
            }
            if(countIncrease){
                count++;
            }
        }

        return count;
    }
};