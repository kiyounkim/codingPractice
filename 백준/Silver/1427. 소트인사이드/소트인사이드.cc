#include <iostream>
#include <string>

using namespace std;
int main(){
    string n;
    cin >> n;
    int len=n.length();
    int a[10]={0};
    int count=0;
    for(int i=0;i<=10;i++){
        for(int j=0;j<len;j++){
            if(n[j]-'0'==i){
                a[i]++;
            }
        }
    }
    int temp=9;
    while(temp!=-1){
        if(a[temp]==0)
            temp--;
        else{
            cout << temp;
            a[temp]--;
        }
    }
}