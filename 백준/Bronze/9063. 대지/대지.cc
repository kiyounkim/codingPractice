#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> a[i][j];
        }
    }
    int maxx=-10001;
    int minx=10001;
    int maxy=-10001;
    int miny=10001;
    for(int i=0;i<n;i++){
        if(a[i][0]>maxx){
            maxx=a[i][0];
        }
        if(a[i][0]<minx){
            minx=a[i][0];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][1]>maxy){
            maxy=a[i][1];
        }
        if(a[i][1]<miny){
            miny=a[i][1];
        }
    }
    cout << abs(maxx-minx)*abs(maxy-miny);
}