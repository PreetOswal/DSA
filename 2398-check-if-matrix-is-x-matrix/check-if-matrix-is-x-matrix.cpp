class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int j=0;
        for(int i=0; i<grid.size();){
            j=i;
            if(grid[i][j] == 0) return false;
            i++,j++;
        }

        for(int i=0; i<grid.size();){
            j=grid.size() - 1 - i;
            if(grid[i][j] == 0) return false;
            i++;
        }

        for(int i=0; i<grid.size();i++){
            for(int j=0; j<grid.size(); j++){
                if(i == j || j == grid.size() - 1 - i) continue;
                if(grid[i][j] !=0 ) return false;
            }
        }

        return true;
    }
};