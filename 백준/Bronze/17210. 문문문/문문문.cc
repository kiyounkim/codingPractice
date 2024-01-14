#include <iostream>

using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    if(n>=6) {
        cout << "Love is open door";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(f){
            cout << "0\n";
            f = 0;
        }
        else{
            cout << "1\n";
            f = 1;
        }
    }
    return 0;
}
