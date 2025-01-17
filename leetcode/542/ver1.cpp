#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            for (auto [dx, dy] : directions) {
                int newX = x + dx;
                int newY = y + dy;
                
                if (newX >= 0 && newX < m && newY >= 0 && newY < n) {
                    if (dist[newX][newY] > dist[x][y] + 1) {
                        dist[newX][newY] = dist[x][y] + 1;
                        q.push({newX, newY});
                    }
                }
            }
        }
        
        return dist;
    }
};