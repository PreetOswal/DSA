class Solution {
public:

    void validCombination(vector<vector<int>>&allValidCombinations, vector<int>currCombination, vector<int>candidates, int i, int target, int&sum){
        if(sum >= target){
            if(sum == target){
                allValidCombinations.push_back({currCombination});
            }
            return;
        }else if(i==candidates.size()){
            return;
        }

        currCombination.push_back(candidates[i]);
        sum += candidates[i];
        validCombination(allValidCombinations, currCombination, candidates, i, target, sum);


        currCombination.pop_back();
        sum -= candidates[i];
        validCombination(allValidCombinations, currCombination, candidates, i+1, target, sum);

        return;

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>allValidCombinations;
        vector<int>currCombination;
        int sum = 0;

        validCombination(allValidCombinations, currCombination, candidates, 0, target, sum);

        return allValidCombinations;
    }
};