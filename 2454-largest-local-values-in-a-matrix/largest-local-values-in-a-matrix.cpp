class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>smallGrid;
        vector<int>ans;
        int rowIdxStart =0, rowIdxEnd = 2;
        int colIdxStart = 0, colIdxEnd = 2;
        while(rowIdxEnd < grid.size() && colIdxEnd<grid.size()){
            int maximum = INT_MIN;
            for(int i=rowIdxStart; i<=rowIdxEnd; i++){
                for(int j=colIdxStart; j<=colIdxEnd; j++){
                    maximum = max(maximum, grid[i][j]);
                }
            }
            ans.push_back(maximum);
            colIdxStart++, colIdxEnd++;
            if(colIdxEnd == grid.size()){
                smallGrid.push_back(ans);
                ans.clear();
                colIdxStart = 0 , colIdxEnd = 2;
                rowIdxStart++,rowIdxEnd++;
            }
        }

        return smallGrid;
    }
};