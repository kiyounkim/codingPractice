#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> a >> b >> c;
    if (b>=c)
        cout << "-1" << endl;
    else{
        n = a/(c-b)+1;
        cout << n << endl;
        }
    return 0;
}