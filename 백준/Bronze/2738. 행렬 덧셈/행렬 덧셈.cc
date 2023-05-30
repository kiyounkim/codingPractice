#include <iostream>

using namespace std;

int main(){
    int a=0,b=0;
    cin >> a >> b;
    int temp[a][b];
    int temp2[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> temp[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> temp2[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << temp[i][j] + temp2[i][j] << " ";
        }
        cout<<endl;
    }
}