class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> dist(rows, vector<int>(cols, INT_MAX));
        queue<pair<int, int>> q;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        int dirX[] = {-1, 0, 1, 0};
        int dirY[] = {0, 1, 0, -1};
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            for(int i = 0; i < 4; i++) {
                int newRow = curr.first + dirX[i];
                int newCol = curr.second + dirY[i];
                if(newRow < 0 || newRow >= rows || newCol < 0 || newCol >= cols) {
                    continue;
                }
                if(dist[newRow][newCol] > dist[curr.first][curr.second] + 1) {
                    dist[newRow][newCol] = dist[curr.first][curr.second] + 1;
                    q.push({newRow, newCol});
                }
            }
        }
        
        return dist;
    }
};
