#include <bits/stdc++.h>
using namespace std;

int graph[100][100];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
queue<pair<int,int>> q;

void bfs(int x, int y,int rows,int cols) {
    q.push({x, y});
    while (!q.empty()) {
        int size = q.size();
        int xPos = q.front().first;
        int yPos = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int newX = xPos + dx[i];
            int newY = yPos + dy[i];
            if(newX>=0 && newX<rows && newY>=0 && newY<cols && graph[newX][newY]==1){
                q.push({newX,newY});
                graph[newX][newY] = graph[xPos][yPos] + 1;
            }
        }
    }
    cout << graph[rows-1][cols-1] << endl;
}

int main() {
    int rows,cols;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            //use scanf("%1d") because we are reading a single digit in a line.
            //if we used cin, it would read the whole line as a single integer.
             scanf("%1d", &graph[i][j]); 
        }
    }
    bfs(0, 0,rows,cols);
    return 0;
}

