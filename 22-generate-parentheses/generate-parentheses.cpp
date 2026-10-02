class Solution {
public:

    void parenthesisGenerator(vector<string>&ans, string &currSeq, int n, int open, int close){

        if(currSeq.length() == 2*n){
            ans.push_back({currSeq});
            return;
        }

        if(open<n){
            currSeq.push_back('(');

            parenthesisGenerator(ans, currSeq, n, open+1, close);//recusive call

            currSeq.pop_back();//backtracking

        }

        if(close<open){
            currSeq.push_back(')');

            parenthesisGenerator(ans, currSeq, n, open, close+1);//recusive call

            currSeq.pop_back();//backtracking step

        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string currSeq = "";
        int open = 0;
        int close = 0;

        parenthesisGenerator(ans, currSeq, n, open, close);

        return ans;
    }
};