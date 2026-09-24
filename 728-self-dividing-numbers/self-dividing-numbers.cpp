class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left; i<=right; i++){
            bool isSelfDividing = true;
            int num = i;
            while(num!=0){
                int digit = num % 10;
                if(digit == 0 || i%digit != 0){
                    isSelfDividing = false;
                    break;
                }
                num = num / 10;
            }

            if(isSelfDividing) ans.push_back(i);
        }

        return ans;
    }
};