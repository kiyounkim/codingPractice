#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int max = 0;
    for(int i=0;i<4;i++){
        int in,out;
        cin >> out >> in;
        sum -= out;
        if(sum > max) max = sum;
        sum += in;
        if(sum > max) max = sum;
    }
    cout << max << endl;
}