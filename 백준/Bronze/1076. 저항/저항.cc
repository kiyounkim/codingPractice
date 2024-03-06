#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string t;
    string colors[] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    int val[3] = {0,};
    long long result = 0;
    for(int i=0;i<3;i++){
        cin >> t;
        for(int j=0;j<10;j++){
            if(t == colors[j]){
                val[i] = j;
                break;
            }
        }
    }
    result = (val[0]*10 + val[1]) * pow(10,val[2]);
    cout << result << endl;
    return 0;
}
