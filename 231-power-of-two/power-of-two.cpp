class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        long long product = 1;
        for(int i=1 ;; i++){
            product = product * 2;

            if(product == n) return true;
            if(product > n) return false;
        }

        return false;
    }
};