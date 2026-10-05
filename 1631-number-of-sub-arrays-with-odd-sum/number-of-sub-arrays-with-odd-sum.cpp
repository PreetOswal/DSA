class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1000000007;
        int res = 0;
        int evenCount = 1;
        int oddCount = 0;
        int prefixSum = 0;

        for(int i=0; i<arr.size(); i++){
            prefixSum = prefixSum + arr[i];

            if(prefixSum % 2 == 0){
                evenCount++;
                res = (res + oddCount) % MOD;
            }else{
                oddCount++;
                res =  (res + evenCount) % MOD;
            }
        }

        return res;

    }
};