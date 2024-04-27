#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    queue<pair<int, int>> q;
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j] && picture[i][j] != 0) {
                number_of_area++;
                int size_of_area = 0;
                q.push({i, j});
                visited[i][j] = true;

                while (!q.empty()) {
                    auto [x, y] = q.front(); q.pop();
                    size_of_area++;
                    for (auto& dir : directions) {
                        int nx = x + dir[0], ny = y + dir[1];
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && picture[nx][ny] == picture[x][y]) {
                            visited[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
                
                max_size_of_one_area = max(max_size_of_one_area, size_of_area);
            }
        }
    }

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
