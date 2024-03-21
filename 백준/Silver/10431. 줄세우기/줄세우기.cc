#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int num;
        cin >> num;
        int arr[20];
        for (int i = 0; i < 20; ++i) {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i < 20; ++i) {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; --j) {
                swap(arr[j], arr[j - 1]);
                count++;
            }
        }
        cout << num << " " << count << "\n";
    }
    return 0;
}
