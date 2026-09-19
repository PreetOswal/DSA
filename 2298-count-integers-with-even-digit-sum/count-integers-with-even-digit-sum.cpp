class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i=1; i<=num; i++){
            int sum = 0;
            int newNum = i;
            while(newNum!=0){
                sum = sum + (newNum%10);
                newNum = newNum/10;
            }
            if(sum % 2 == 0) ans++;
        }

        return ans;
    }
};