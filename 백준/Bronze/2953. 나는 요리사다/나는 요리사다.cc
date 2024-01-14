#include <iostream>

using namespace std;

int main() {
    int max = -1;
    int place = -1;
    for(int i=0;i<5;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            int n;
            cin >> n;
            sum+=n;
        }
        if(max<sum){
            max = sum;
            place=i+1;
        }
    }
    cout << place << " " << max << endl;
}
