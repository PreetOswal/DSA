class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        long long product = 1;
        for(int i=0; ; i++){
            product = product * 3;

            if(product == n) return true;
            if(product > n) return false;
        }

        return false;
    }
};