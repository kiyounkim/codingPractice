#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n<10)
        n*=10;
    int count = 0;
    int num = 0;
    int temp = n;
    while(1) {
        num = (temp%10)*10 + (temp/10 + temp%10)%10;
        temp = num;
        count++;
        if(num == n)
            break;
    }
    cout << count << '\n';
    return 0;
}
