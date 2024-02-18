#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> data(n);
    for(int i = 0; i < n; ++i) {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    int start = data[0];
    int count = 1;
    for(int i = 1; i < n; ++i) {
        if(data[i] >= start + l) {
            start = data[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
