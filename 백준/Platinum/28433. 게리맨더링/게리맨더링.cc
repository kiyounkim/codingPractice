#include <iostream>
#include <vector>

using namespace std;

string canDivide(vector<int>& nums) {
    long long cur = 0;
    int cnt = 0;

    for (int x : nums) {
        if (x == 0) continue;

        if (cur <= 0 && (cur + x > 0 || x < 0)) {
            cur += x;
        } else if (cur > 0 && cur + x > 0 && x < 0) {
            cur += x;
        } else {
            cnt += cur > 0 ? 1 : -1;
            cur = x;
        }
    }
    cnt += cur > 0 ? 1 : -1;

    return cnt > 0 ? "YES" : "NO";
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<int> nums(N);
        for (int i = 0; i < N; ++i) {
            cin >> nums[i];
        }
        cout << canDivide(nums) << endl;
    }
    return 0;
}
