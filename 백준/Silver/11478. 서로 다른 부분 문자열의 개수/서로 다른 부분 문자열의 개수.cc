#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    unordered_map<string, bool> unique_substrings;
    for(int j = 1; j <= len; j++) {
        for(int i = 0; i + j <= len; i++) {
            unique_substrings[s.substr(i, j)] = true;
        }
    }
	cout << unique_substrings.size() << endl;
}
