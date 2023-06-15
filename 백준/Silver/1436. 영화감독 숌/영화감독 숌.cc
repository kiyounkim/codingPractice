#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int temp = 0;
    while (count < n) {
        temp++;
        if (to_string(temp).find("666") != string::npos) {
            count++;
        }
    }
    cout << temp;
    return 0;
}
