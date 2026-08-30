class Solution {
public:

    bool powerOfFour(int n, long long product){
        if(product == n) return true;
        if(product > n) return false;

        product = product * 4;
        
        bool ans = powerOfFour(n, product);

        return ans;
    }

    bool isPowerOfFour(int n) {
        bool answer = powerOfFour(n ,1);

        return answer;
    }
};