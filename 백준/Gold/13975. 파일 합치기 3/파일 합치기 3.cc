#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int k;
        cin >> k;
        priority_queue<long long,vector<long long>,greater<>> pq;
        for(int j=0;j<k;j++){
            int n;
            cin >> n;
            pq.push(n);
        }
        long long sum = 0;
        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            sum += a+b;
            pq.push(a+b);
        }
        cout << sum << '\n';
    }
    return 0;
}
