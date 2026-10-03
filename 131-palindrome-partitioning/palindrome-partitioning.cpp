class Solution {
public:

    bool isPalindrome(string s){
        int i=0; 
        int j=s.length() - 1;
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++, j--;
        }

        return true;
    }

    void getAllPartitions(vector<vector<string>>&ans, vector<string>&partitions, string s){

        if(s.length() == 0){
            ans.push_back({partitions});
            return;
        }

        for(int i=0; i<s.length(); i++){
            string part = s.substr(0, i+1);
            if(isPalindrome(part)){
                partitions.push_back({part});
                getAllPartitions(ans, partitions, s.substr(i+1));
                partitions.pop_back();
            }

        }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partitions;

        getAllPartitions(ans, partitions, s);

        return ans;
    }
};