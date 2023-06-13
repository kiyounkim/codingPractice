#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 1, b = 1, c = 1;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        if(a>=b+c || b>=a+c || c>=a+b) cout << "Invalid\n";
        else if(a==b&&b==c) cout << "Equilateral\n";
        else if(a==b||b==c||a==c) cout << "Isosceles\n";
        else cout << "Scalene\n";
    }
    return 0;
}
