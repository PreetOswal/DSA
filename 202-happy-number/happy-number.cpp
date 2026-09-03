class Solution {
public:

    bool happyOrNot(int n, unordered_set<int>&s){
        int sum = 0;
        while(n!=0){
            int rem = n % 10;
            sum = sum + (rem*rem);
            n = n/10;
        }

        if(sum == 1) return true;
        if(s.count(sum)){
            return false;
        }else{
            s.insert(sum);
        }

        bool ans = happyOrNot(sum, s);

        return ans;
    }

    bool isHappy(int n) {
        unordered_set<int>s;
        bool ans = happyOrNot(n,s);

        return ans;
    }
};