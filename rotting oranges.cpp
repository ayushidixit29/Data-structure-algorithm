class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        queue<pair<int, int>> que;
        int fresh =0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 2){
                    que.push({i, j});
                } else if(grid[i][j] ==1) fresh++;
            }
        }
        
        int time=0;
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        
        while(fresh && !que.empty()){
            int q = que.size();
			
            for(int i=0; i<q; i++){
                int left = que.front().first;
                int right = que.front().second;
                que.pop();
                
                for(auto d: dirs){
                    int x = left+ d.first;
                    int y = right+ d.second;
                    if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && grid[x][y] == 1){
                        grid[x][y] = 2;
                        fresh--;
                        que.push({x,y});
                    }
                }
            }
            time++;
        }
        return fresh ==0 ? time : -1;
    }
};
