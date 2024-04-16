#include <iostream>
#include <set>
#include <string>
using namespace std;

struct Comparator {
    bool operator()(const string& a, const string& b) const {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    set<string, Comparator> words; 

    string word;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        words.insert(word); 
    }

    for (const auto& w : words) {
        cout << w << "\n";
    }

    return 0;
}
