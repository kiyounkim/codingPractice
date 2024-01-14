#include <iostream>
#include <string>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    double num;
    char ch;
 
    for(int i=0; i<n; i++){
        cin>>num;
        while(1){
            cin.get(ch);
            if(ch=='\n')
                break;
            if(ch=='@')
                num*=3;
            if(ch=='%')
                num+=5; 
            if(ch=='#')
                num-=7;
        }
    cout<<fixed;
    cout.precision(2);
    cout<<num<<"\n";
    }
}