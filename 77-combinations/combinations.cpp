class Solution {
public:

    void validCombination(vector<vector<int>>&allValidCombinations, vector<int>&currCombination, int k, int end){
        if(currCombination.size() == k){
            allValidCombinations.push_back({currCombination});
            return;
        }else if(currCombination.size() > k || end < 1){
            return;
        }

        currCombination.push_back(end);
        validCombination(allValidCombinations, currCombination,k, end - 1);

        currCombination.pop_back();
        validCombination(allValidCombinations, currCombination, k, end - 1);

        return;

    }


    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>allValidCombinations;
        vector<int>currCombination;
        
        validCombination(allValidCombinations, currCombination, k, n);

        return allValidCombinations;
    }
};