class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum;
        int primaryDiagonal = 0;
        int secondaryDiagonal = 0;
        int j=0;
        for(int i=0; i<mat.size();){
            primaryDiagonal = primaryDiagonal + mat[i][j];
            i++,j++;
        }

        j=0;
        for(int i=0; i<mat.size();){
            j = mat.size() - 1 - i;
            if(i==j) i++,j++;
            else{
                secondaryDiagonal = secondaryDiagonal + mat[i][j];
                i++,j++;
            }
        }

        return primaryDiagonal + secondaryDiagonal;
    }
};