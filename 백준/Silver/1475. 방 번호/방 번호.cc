#include <iostream>
#include <algorithm>
using namespace std;
int arr[10]={0};
int main(){
    int num;
    cin>>num;
    while(num>0){
        arr[num%10]++;
        num/=10;
    }
    int ans = 0;
    for(int i=0;i<10;i++)
        if(i!=6 && i!=9) ans = max(ans,arr[i]);
    cout<<max(ans,(arr[6]+arr[9]+1)/2);
}