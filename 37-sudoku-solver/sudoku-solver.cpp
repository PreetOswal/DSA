class Solution {
public:

    bool isSafe(vector<vector<char>>&board, int row, int col, int dig){
        //search Horizontally
        for(int j=0; j<9; j++){
            if(board[row][j] == dig+'0'){
                return false;
            }
        }

        //search Vertically
        for(int j=0; j<9; j++){
            if(board[j][col] == dig+'0'){
                return false;
            }
        }

        //Compute The 3X3 seach Window
        int stRow,endRow,stCol,endCol;

        if(row>=0 && row<=2){
            stRow = 0;
            endRow = 2;
        }else if(row>=3 && row<=5){
            stRow = 3;
            endRow = 5;
        }else{
            stRow = 6;
            endRow = 8;
        }

        if(col >= 0 && col <= 2){
            stCol = 0;
            endCol = 2;
        }else if(col >= 3 && col <= 5){
            stCol = 3;
            endCol = 5;
        }else{
            stCol = 6;
            endCol = 8;
        }

        //Search in Window
        for(int i=stRow; i<=endRow; i++){
            for(int j=stCol; j<=endCol; j++){
                if(board[i][j] == dig + '0'){
                    return false;
                }
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>&board, int row, int col){
        if(row == 9){
            return true;
        }

        int nextRow = row;
        int nextCol = col + 1;
        if(nextCol == 9){
            nextRow = row + 1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
            return solve(board, nextRow, nextCol);
        }

        for(int i=1; i<=9; i++){
            if(isSafe(board, row, col, i)){
                board[row][col] = (i + '0');
                if(solve(board, nextRow, nextCol)){
                    return true;
                }
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);

        return;
    }
};