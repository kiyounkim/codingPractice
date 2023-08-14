#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
int arr[8];
bool visited[8];

void DFS(int depth, int index){
	if(depth == m){
		for(int i=0; i<m; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=index;i<=n;i++){
		if(!visited[i]){
			visited[i]=true;
			arr[depth] = i;
			DFS(depth+1,i+1);
			visited[i]=false;
		}
	}
}

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	
	cin >> n >> m;
	DFS(0,1);
	return 0;
}