#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int cnt = 0;
int result[100001];
void dfs(int n, bool visited[]) {
    visited[n] = true;
    ++cnt;
    result[n] = cnt;
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

    int n, m, R;
    cin >> n >> m >> R;
    v.resize(n + 1);
    int a, b;
    for(int i = 0; i < m; ++i) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; ++i) {
        sort(v[i].begin(), v[i].end());
    }

    bool visited[m+1] = {false,};

    dfs(R, visited);

    for(int i = 1; i <= n; ++i) {
        cout << result[i] << "\n";
    }
    return 0;
}
