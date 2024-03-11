#include <bits/stdc++.h>
using namespace std;
bool flag[10001];

int selfNum(int n){
    return n+n%10+n/10%10+n/100%10+n/1000%10;
}

int main() {
    for(int i=0;i<10001;i++) flag[selfNum(i)]=true;
    for(int i=0;i<10001;i++) if(!flag[i]) cout << i << '\n';
}
