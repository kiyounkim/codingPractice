#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[100001]={0};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    queue<int> q;
    for(int i=0;i<n;i++){
        if(q.empty()) q.push(arr[i]);
        if(q.back()!=arr[i]){
            q.push(arr[i]);
        }
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}