#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<>> minpq;
    priority_queue<int> maxpq;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(minpq.size() == maxpq.size()){
            maxpq.push(num);
        }else{
            minpq.push(num);
        }
        if(!minpq.empty() && !maxpq.empty() && minpq.top() < maxpq.top()){
            int a = minpq.top();
            int b = maxpq.top();
            minpq.pop();
            maxpq.pop();
            minpq.push(b);
            maxpq.push(a);
        }
        cout << maxpq.top() << '\n';
    }
}
