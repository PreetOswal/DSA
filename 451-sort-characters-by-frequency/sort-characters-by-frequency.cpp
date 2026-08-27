class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        vector<pair<char,int>>vec;
        unordered_map<char,int>m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

        for(auto it : m){
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i=0; i<vec.size();){
            if(vec[i].second == 0){
                i++;
            }else{
                ans.push_back(vec[i].first);
                vec[i].second--;
            }
        }

        return ans;
    }
};