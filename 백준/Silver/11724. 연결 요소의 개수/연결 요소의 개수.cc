#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100001;
bool visited[MAX]={false};

void DFS(vector<int> graph[],int current){
    visited[current] = true;
    for(int i=0;i<graph[current].size();i++){
        int next = graph[current][i];
        if(!visited[next]){
            DFS(graph,next);
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> graph[MAX];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    int connectedComponents = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            DFS(graph, i);
            connectedComponents++;
        }
    }
    cout << connectedComponents << endl;
    return 0;
}