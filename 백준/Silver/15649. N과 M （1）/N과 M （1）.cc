#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector<int> arr;
bool visited[8];

void DFS(int depth){
	if(depth == m){
		for(int i=0; i<arr.size(); i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			visited[i]=true;
			arr.push_back(i);
			DFS(depth+1);
			visited[i]=false;
			arr.pop_back();
		}
	}
}

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	
	cin >> n >> m;
	DFS(0);
	return 0;
}