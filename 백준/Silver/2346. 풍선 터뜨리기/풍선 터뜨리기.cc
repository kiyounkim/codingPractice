#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    deque<pair<int,int>> dq;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back({x, i+1});
    }
    while(n--){
        int pop = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();
        if(pop > 0) {
            for(int i = 0; i < pop-1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for(int i = 0; i < abs(pop); i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}
