class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

        for(int i=0; i<t.length(); i++){
            if(m.find(t[i]) == m.end()){
                return false;
            }
            m[t[i]]--;
            if(m[t[i]] == 0){
                m.erase(t[i]);
            }
        }

        if(!m.empty()) return false;

        return true;
    }
};