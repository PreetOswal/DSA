class Solution {
public:

    void validCombination(vector<vector<int>>&allValidCombinations, vector<int>&currCombination, int st, int n, int&sum, int k){
        if(currCombination.size() == k && sum>=n){
            if(sum == n){
                allValidCombinations.push_back({currCombination});
            }
            return;
        }else if(currCombination.size() > k){
            return;
        }else if(st == 10){
            return;
        }

        currCombination.push_back(st);
        sum += st;
        validCombination(allValidCombinations, currCombination, st+1, n, sum, k);

        currCombination.pop_back();
        sum -= st;
        validCombination(allValidCombinations, currCombination, st+1, n, sum, k);

        return;        

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>allValidCombinations;
        vector<int>currCombination;
        int sum=0;

        if(n < k) return allValidCombinations;
        validCombination(allValidCombinations, currCombination, 1, n, sum, k);

        return allValidCombinations;
    }
};