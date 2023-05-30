#include <iostream>
using namespace std;

int main(){
    int a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> a[i][j];
        }
    }
    int max=-1;
    int x,y;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]>max){
                max=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    cout << max <<endl;
    cout << x+1 << " " << y+1 << " " << endl; 
}