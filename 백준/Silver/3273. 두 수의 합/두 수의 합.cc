#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int target;
    cin >> target;
    int count = 0;
    int start = 0;
    int end = n-1;
    while(start < end){
        if(a[start] + a[end] == target){
            count++;
            start++;
            end--;
        }
        else if(a[start] + a[end] < target) start++;
        else end--;
    }
    cout << count;
}