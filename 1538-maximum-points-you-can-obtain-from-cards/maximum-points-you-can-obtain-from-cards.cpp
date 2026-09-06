class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=0; i<k; i++){
            sum = sum + cardPoints[i];
        }

        int maxCardScore = sum;
        int lastPointIdx = cardPoints.size() - 1;
        for(int i=k-1; i>=0; i--){
            sum = sum - cardPoints[i] + cardPoints[lastPointIdx];
            lastPointIdx--;
            maxCardScore = max(maxCardScore, sum);
        }

        return maxCardScore;
    }
};