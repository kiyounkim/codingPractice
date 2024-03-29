#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b-c <<"\n";
    string s;
    s = to_string(a) + to_string(b);
    cout << stoi(s)-c <<"\n";
    return 0;
}
