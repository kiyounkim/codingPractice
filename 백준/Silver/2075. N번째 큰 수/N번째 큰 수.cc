#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n*n;i++){
        int num;
        cin >> num;
        if(pq.size()<n) pq.push(num);
        else{
            if(pq.top()<num){
                pq.pop();
                pq.push(num);
            }
        }
    }
    cout << pq.top();
    return 0;
}
