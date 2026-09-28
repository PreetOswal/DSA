class Solution {
public:
    int maxDepth(string s) {
        int maximumNestingDepth = 0;
        int currDepth = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                currDepth++;
            }else if(s[i] == ')'){
                currDepth--;
            }
            maximumNestingDepth = max(maximumNestingDepth, currDepth);
        }

        return maximumNestingDepth;
    }
};