#include <bits/stdc++.h>
using namespace std;
int graph[5][5];
bool visited[5][5];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int ans = 0;
queue<pair<int,int>> q;

void bfs(int x, int y) {
    q.push({x, y});
    visited[x][y] = true;
    int steps = 0;

    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            int curX = q.front().first;
            int curY = q.front().second;
            q.pop();
            if (graph[curX][curY] == 1) {
                ans = steps;
                return;
            }
            for (int j = 0; j < 4; ++j) {
                int newX = curX + dx[j];
                int newY = curY + dy[j];
                if (newX >= 0 && newX < 5 && newY >= 0 && newY < 5 && !visited[newX][newY] && graph[newX][newY] != -1) {
                    q.push({newX, newY});
                    visited[newX][newY] = true;
                }
            }
        }
        ++steps;
    }
    ans = -1;
}

int main() {
    int startX,startY;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>graph[i][j];
        }
    }
    cin>>startX>>startY;
    bfs(startX,startY);
    cout<<ans;
    return 0;
}
