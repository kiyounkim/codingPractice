#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.length() < s2.length())
        cout << "no" << "\n";
    else
        cout << "go" << "\n";
    return 0;
}
