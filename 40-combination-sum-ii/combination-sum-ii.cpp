class Solution {
public:

    void validCombination(vector<vector<int>>&allValidCombinations, vector<int>&currCombination, vector<int>&candidates, int i, int target, int&sum){
        if(sum >= target){
            if(sum == target){
                allValidCombinations.push_back({currCombination});
            }
            return;
        }else if(i == candidates.size()){
            return;
        }

        currCombination.push_back(candidates[i]);
        sum += candidates[i];
        validCombination(allValidCombinations, currCombination, candidates, i+1, target, sum);

        currCombination.pop_back();
        sum -= candidates[i];
        int idx = i+1;
        while(idx < candidates.size() && candidates[i] == candidates[idx]){
            idx++;
        }
        validCombination(allValidCombinations, currCombination, candidates, idx, target, sum);

        return;

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>allValidCombinations;
        vector<int>currCombination;
        int sum = 0;
        sort(candidates.begin(), candidates.end());
        validCombination(allValidCombinations, currCombination, candidates, 0, target, sum);
        return allValidCombinations;
    }
};