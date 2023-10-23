#include <bits/stdc++.h>
using namespace std;

int solve(int start, int end){
    int distance = end - start;
    int max = (int)sqrt(distance);
    if(max == sqrt(distance)) return 2*max - 1;
    else if(distance <= max*max + max) return 2*max;
    else return 2*max + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCount;
    cin >> testCount;
    for(int i=0;i<testCount;i++){
        int start, end;
        cin >> start >> end;
        cout << solve(start, end) << "\n";
    }
}