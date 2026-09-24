class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int copyNum = num;
        while(num != 0){
            int rem = num % 10;
            if(copyNum % rem == 0) count++;
            num = num / 10;
        }

        return count;
    }
};