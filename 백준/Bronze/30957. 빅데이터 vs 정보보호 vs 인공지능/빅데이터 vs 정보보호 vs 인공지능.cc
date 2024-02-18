#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3] = {0};
    for(int i=0;i<n;i++){
        char c;
        cin >> c;
        if(c == 'B')
            a[0]++;
        else if(c == 'S')
            a[1]++;
        else
            a[2]++;
    }
    if(a[0]==a[1] && a[1]==a[2])
        cout << "SCU";
    else{
        int max = *max_element(a,a+3);
        if(max == a[0]) cout << "B";
        if(max == a[1]) cout << "S";
        if(max == a[2]) cout << "A";
    }
        
    return 0;
}
