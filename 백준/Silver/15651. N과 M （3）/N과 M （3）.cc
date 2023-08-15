#include <iostream>
using namespace std;

int n,m;
int arr[7];
bool visited[7];

void DFS(int depth){
    if(depth == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1;i<=n;i++){
        arr[depth] = i;
        DFS(depth+1);
    }
}

int main() {
    cin >> n >> m;
    DFS(0);
    return 0;
}
