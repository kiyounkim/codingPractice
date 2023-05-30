#include <iostream>
using namespace std;
int main(){
    int arr[100][100]={0};
    int num;
    int count=0;
    cin>>num;
    int x,y;
    for(int i=0;i<num;i++){
        cin>>x>>y;
        for(int j=x;j<x+10;j++){
            for(int k=y;k<y+10;k++){
                if(arr[j][k]==1) continue;
                arr[j][k]=1;
                count++;
            }
        }
    }
    cout<<count;
}