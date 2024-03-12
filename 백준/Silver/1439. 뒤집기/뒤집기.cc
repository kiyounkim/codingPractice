#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    if (!s.empty()) {
        if (s[0] == '0') count0++;
        else count1++;
    }
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == '0' && s[i-1] == '1') count0++;
        else if (s[i] == '1' && s[i-1] == '0') count1++;
    }
    cout << min(count0, count1) << endl;
    return 0;
}
