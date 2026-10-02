class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        bool isNegative = false;
        int i=0;
        while(s[i] == ' ' && i<s.length()){
            i++;
        }

        if(s[i] == '-'){
            isNegative = true;
            i++;
        }else if(s[i] == '+'){
            i++;
        }

        while(s[i] >= '0' && s[i] <= '9'){
            ans = (ans*10) + (s[i] - '0');
            if(ans > INT_MAX){
                return isNegative ? INT_MIN : INT_MAX;
            }
            i++;
        }

        if(isNegative){
            ans = (-1)*ans;
        }


        return ans;
    }
};