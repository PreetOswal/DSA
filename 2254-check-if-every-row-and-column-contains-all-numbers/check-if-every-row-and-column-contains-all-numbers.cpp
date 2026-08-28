class Solution {
public:
    bool checkValid(vector<vector<int>> &matrix) {
        vector<int>check;
        vector<int>col;
        vector<vector<int>>newMatrix = matrix;
        for(int i=1; i<=matrix.size(); i++){
            check.push_back(i);
        }

        for(int i=0; i<matrix.size(); i++){
            sort(matrix[i].begin(), matrix[i].end());
            if(check != matrix[i]) return false;
        }

        for(int i=0; i<newMatrix.size(); i++){
            for(int j=0; j<newMatrix.size(); j++){
                col.push_back(newMatrix[j][i]);
                cout<<newMatrix[j][i]<<" ";
            }
            sort(col.begin(), col.end());
            if(check != col) return false;
            col.clear();
        }

        return true;
    }
};