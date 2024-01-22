#include <iostream>
#include <algorithm>
using namespace std;
#define INT_MAX 100000001

int main() {
    int n , s;
    cin >> n >> s;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int ptr1,ptr2,sum = 0;
    int ans = INT_MAX;
    while (ptr1<n && ptr2<n) {
        sum += arr[ptr2++];
        while (sum >= s) {
            ans = min(ans, ptr2-ptr1);
            sum -= arr[ptr1++];
        }
    }
    if(ans == INT_MAX) 
        cout << 0 << endl;
    else
        cout << ans << endl;
    return 0;
}
