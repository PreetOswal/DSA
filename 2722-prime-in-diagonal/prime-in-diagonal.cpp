class Solution {
public:

    bool isPrime(int num){
        bool prime = true;
        if(num == 1) return false;
        if(num == 2) return true;

        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                prime = false;
                break;
            }
        }

        if(prime) return true;

        return false;
    }


    int diagonalPrime(vector<vector<int>>& nums) {//(0,0) (1,1) (2,2) //(0,2) (1,1) (2,0)
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int j=i;
            if(isPrime(nums[i][j])){
                ans = max(ans, nums[i][j]);
            }
        }

        for(int i=0; i<nums.size(); i++){
            int j = nums.size() - 1 - i;
            if(isPrime(nums[i][j])){
                ans = max(ans, nums[i][j]);
            }
        }

        return ans;
    }
};