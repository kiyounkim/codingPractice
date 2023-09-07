#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];

void dfs(int n, bool visited[]) {
    visited[n] = true;
    for(int i = 0; i < v[n].size(); ++i) {
        if(!visited[v[n][i]]) {
            dfs(v[n][i], visited);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int m;
    cin >> m;
    int a,b;
    for(int i = 0; i < m; ++i) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bool visited[101] = {false,};

    dfs(1, visited);

    int cnt = 0;
    for(int i = 2; i <= n; ++i) {
        if(visited[i]) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
