class Solution {
public:
    
    int findmaxsize(vector<vector<int>>& matrix, int x, int y){
        if(x < 0 || x >= matrix.size() || y < 0 || y >= matrix[x].size() || matrix[x][y] == 0)
            return 0;
        matrix[x][y] = 0;
        
        int count  = 1;
        count += findmaxsize(matrix, x+1, y);
        count += findmaxsize(matrix, x, y+1);
        count += findmaxsize(matrix, x-1, y);
        count += findmaxsize(matrix, x, y-1);
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int maxsize = 0;
        
        if(rows == 0)
            return 0;
        int cols = grid[0].size();
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 1)
                    maxsize = max(maxsize, findmaxsize(grid, i, j));
            }
        }
        return maxsize;
    }
};
