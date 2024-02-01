#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int N, M, K;
vector<vector<int>> connect;
vector<int> check;

void bfs(int start){
    int Visit = 1;
    queue<int> q;
    q.push(start);
    check[start] = Visit++;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < connect[x].size(); i++){
            int xx = connect[x][i];
            if(check[xx] == 0){
                check[xx] = Visit++;
                q.push(xx);
            }
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M >> K;
    connect.resize(N + 1);
    check.resize(N + 1);
    for(int i = 1; i <= M; i++){
        int x, y;
        cin >> x >> y;
        connect[x].push_back(y);
        connect[y].push_back(x);
    }
    for(int i = 1; i <= N; i++){
        sort(connect[i].begin(), connect[i].end());
    }
    bfs(K);
    for(int i = 1; i <= N; i++){
        cout << check[i] << "\n";
    }
    return 0;
}
