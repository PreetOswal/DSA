class Solution {
public:
    bool isSameAfterReversals(int num) {
        int dupNum = num;
        int total = 0;
        while(dupNum!=0){
            int rem = dupNum % 10;
            total = (total*10) + rem;
            dupNum = dupNum / 10;
        }

        int dupNum2 = total;
        total = 0;
        while(dupNum2!=0){
            int rem = dupNum2 % 10;
            total = (total*10) + rem;
            dupNum2 = dupNum2 / 10;
        }

        if(total == num){
            return true;
        }

        return false;
    }
};