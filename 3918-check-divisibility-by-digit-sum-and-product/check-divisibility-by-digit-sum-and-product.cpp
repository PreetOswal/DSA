class Solution {
public:
    bool checkDivisibility(int n) {
        int dupNum = n;
        int sum = 0;
        int product = 1;
        while(dupNum!=0){
            int rem = dupNum % 10;
            sum = sum + rem;
            product = product * rem;
            dupNum = dupNum / 10;
        }

        if(n % (sum + product) == 0){
            return true;
        }

        return false;
    }
};