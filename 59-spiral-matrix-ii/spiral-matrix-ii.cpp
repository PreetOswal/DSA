class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n,0));
        int stRow = 0, stCol = 0;
        int endRow = n-1, endCol = n-1;
        int count = 1;
        while(stRow<=endRow && stCol<=endCol){

            for(int i=stCol; i<=endCol; i++){
                ans[stRow][i] = count;
                count++;
            }

            for(int i=stRow+1; i<=endRow; i++){
                ans[i][endCol] = count;
                count++;
            }

            for(int i=endCol-1; i>=stCol; i--){
                ans[endRow][i] = count;
                count++;
            }

            for(int i=endRow-1; i>=stRow+1; i--){
                ans[i][stCol] = count;
                count++;
            }

            stRow++,stCol++;
            endRow--,endCol--;
        }

        return ans;
    }
};