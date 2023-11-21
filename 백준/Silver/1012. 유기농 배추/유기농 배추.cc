#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<bool>>& grid, int x, int y, int M, int N) {
    if (x < 0 || y < 0 || x >= M || y >= N || !grid[x][y]) return;
    grid[x][y] = false;

    DFS(grid, x + 1, y, M, N); // 오른쪽 이동
    DFS(grid, x - 1, y, M, N); // 왼쪽 이동
    DFS(grid, x, y + 1, M, N); // 위쪽 이동
    DFS(grid, x, y - 1, M, N); // 아래쪽 이동
}

int main() {
    int T, M, N, K, X, Y;
    cin >> T;
    
    while (T--) {
        cin >> M >> N >> K;
        vector<vector<bool>> grid(M, vector<bool>(N, false));
        
        for (int i = 0; i < K; ++i) {
            cin >> X >> Y;
            grid[X][Y] = true; // 배추 위치 설정
        }
        
        int count = 0;
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if (grid[i][j]) {
                    DFS(grid, i, j, M, N);
                    count++; // 새로운 배추밭 발견
                }
            }
        }
        cout << count << endl; // 각 테스트 케이스의 배추밭 개수 출력
    }
    return 0;
}