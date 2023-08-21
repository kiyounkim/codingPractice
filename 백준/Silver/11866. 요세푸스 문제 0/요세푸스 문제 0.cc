#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for(int i = 1; i <= n; i++){
		q.push(i);
	}
	cout << "<";
	for(int i = 0; i < n - 1; i++){
		for(int j = 1; j < k; j++){ // Move k-1 times
			int a = q.front();
			q.pop();
			q.push(a);
		}
		cout << q.front() << ", "; // Print the k-th element
		q.pop();
	}
	cout << q.front(); // Print the last remaining element
	cout << ">";
	return 0;
}
