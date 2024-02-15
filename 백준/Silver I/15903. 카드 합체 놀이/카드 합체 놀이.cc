#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<long long, vector<long long>, greater<long long>> arr;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr.push(t);
    }
    for(int i=0;i<m;i++){
        long long a,b;
        a = arr.top();
        arr.pop();
        b = arr.top();
        arr.pop();
        arr.push(a+b);
        arr.push(a+b);
    }
    long long sum = 0;
    while(!arr.empty()){
        sum += arr.top();
        arr.pop();
    }
    cout << sum << endl;
    return 0;
}