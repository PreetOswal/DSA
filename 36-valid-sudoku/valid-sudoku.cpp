class Solution {
public:

    bool isValid(vector<vector<char>>&board, int row, int col, char dig){
        unordered_map<char,char>m;
        m['0'] = '2';
        m['3'] = '5';
        m['6'] = '8';

        //search horizonatally
        for(int j=0; j<9; j++){
            if(board[row][j] == dig){
                return false;
            }
        }

        //search vertically
        for(int j=0; j<9; j++){
            if(board[j][col] == dig){
                return false;
            }
        }

        //compute search window
        int stRow,stCol,endRow,endCol;
        for(auto it:m){
            if(row>=it.first -'0' && row<=it.second-'0'){
                stRow = it.first-'0';
                endRow = it.second-'0';
            }
            if(col>=it.first-'0' && col<=it.second-'0'){
                stCol = it.first-'0';
                endCol = it.second-'0';
            }
        }

        //Search in that 3X3 matrix
        for(int i=stRow; i<=endRow; i++){
            for(int j=stCol; j<=endCol; j++){
                if(board[i][j] == dig){
                    return false;
                }
            }
        }

        return true;
    }

    bool validityChecker(vector<vector<char>>&board, int row, int col){
        if(row == 9){
            return true;
        }

        int nextRow = row;
        int nextCol = col + 1;
        if(nextCol == 9){
            nextRow = row + 1;
            nextCol = 0;
        }

        if(board[row][col] == '.'){
            return validityChecker(board, nextRow, nextCol);
        }

        char digit = board[row][col];
        board[row][col] = '.';
        if(!isValid(board, row, col, digit)){
            board[row][col] = digit;
            return false;
        }
        board[row][col] = digit;
        return validityChecker(board, nextRow, nextCol);
        
    }

    bool isValidSudoku(vector<vector<char>>& board) {
       return validityChecker(board, 0, 0);
    }
};