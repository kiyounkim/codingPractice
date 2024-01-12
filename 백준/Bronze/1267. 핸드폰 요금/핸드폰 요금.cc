#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum1 += (x+30)/30*10;
        sum2 += (x+60)/60*15;
    }
    if(sum1<sum2){
        cout << "Y " << sum1 << endl;
    }else if(sum1>sum2){
        cout << "M " << sum2 << endl;
    }else{
        cout << "Y M " << sum1 << endl;
    }
}