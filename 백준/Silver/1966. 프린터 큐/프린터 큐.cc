#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int a;
	cin >> a;
	for(int i = 0; i < a; i++) {
		int n,m;
		cin >> n >> m;
		queue<pair<int,int>> q;
		priority_queue<int> pq;
		for(int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			q.push({j,tmp});
			pq.push(tmp);
		}
		int order = 1;
		while(!q.empty()){
			int idx = q.front().first;
			int val = q.front().second;
			q.pop();
			if(pq.top() == val){
				pq.pop();
				if(idx == m){
					cout << order << '\n';
					break;
				}
				order++;
			}
			else{
				q.push(make_pair(idx, val));
			}
		}
	}
	return 0;
}