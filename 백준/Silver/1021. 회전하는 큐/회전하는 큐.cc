#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    deque<int> dq;
    for(int i=0;i<n;i++)
        dq.push_back(i+1);
    int cnt=0;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;

        int index=0;
        while(dq[index]!=num)
            index++;
        if(index<=dq.size()/2){
            while(dq.front()!=num){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            dq.pop_front();
        }
        else{
            while(dq.front()!=num){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
            dq.pop_front();
        }
    }
    cout << cnt << endl;
    return 0;
}