#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string B;
    int n;
    cin >> B >> n;
    int num=0;
    for(int i=0;i<B.length();i++){
        int temp =B[i];
        if(temp>='0'&&temp<='9')
            temp = temp - '0';
        else if(temp >= 'A' && temp <= 'Z')
            temp = temp - 'A' + 10;
        num += temp*(pow(n, B.length()-(i+1)));
    }
    cout << num << endl;
}
