#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin >> ws, s);
    int a[26] = {0};
    for(int i=0;i<n;i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a']++;
    }
    cout << *max_element(a, a + 26) << endl;
    return 0;
}
