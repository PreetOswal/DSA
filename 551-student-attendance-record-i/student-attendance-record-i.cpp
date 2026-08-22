class Solution {
public:
    bool checkRecord(string s) {
        int i=1;
        int absCount = 0;
        int consecutiveLate = 1;
        if(s[0] == 'A') absCount++;
        while(i<s.length()){
            if(s[i] == 'A'){
                absCount++;
                if(absCount == 2) return false;
            }

            if(s[i] == 'L' && s[i-1] == 'L'){
                consecutiveLate++;
                if(consecutiveLate == 3) return false;
            }else{
                consecutiveLate = 1;
            }
            i++;
        }

        return true;
    }
};