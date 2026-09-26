class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        string temp = "";
        unordered_map<string,string>m;
        for(int i=0; i<knowledge.size(); i++){
            m[knowledge[i][0]] = knowledge[i][1];
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                while(s[i] != ')'){
                    i++;
                    temp.push_back(s[i]);
                }
                temp.pop_back();
                if(m.find(temp) != m.end()){
                    ans += m[temp];
                }else{
                    ans.push_back('?');
                }
            }else{
                ans.push_back(s[i]);
            }
            temp="";
        }

        return ans;
    }
};