#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count=2;
    while(n--) count+=count-1;
    cout << count*count << endl;
}