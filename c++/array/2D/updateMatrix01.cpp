class UpdateMatrix {
public:
    vector<vector<int>> solve(vector<vector<int>> input) {
        int m = input.size();
        int n = input[0].size();

        vector<vector<int>> dist(m, vector<int>(n, -1));  // Initialize with -1
        queue<pair<int, int>> q;

        // Step 1: Push all 0s into the queue and set their distance as 0
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (input[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        // Step 2: Directions to move in the matrix (up, down, left, right)
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

      

while (!q.empty()) {
    pair<int, int> cell = q.front(); q.pop();
    int x = cell.first;
    int y = cell.second;

    for (auto dir : directions) {
        int dx = dir.first;
        int dy = dir.second;

        int newX = x + dx;
        int newY = y + dy;

        if (newX >= 0 && newX < m && newY >= 0 && newY < n && dist[newX][newY] == -1) {
            dist[newX][newY] = dist[x][y] + 1;
            q.push({newX, newY});
        }
    }
}


        return dist;
    }
};
