#include <iostream>
using namespace std;

int arr[26] = {0};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int birds = 1;
    int count = 0;
    while(n>0){
        if(n<birds){
            birds = 1;
        }
        n-=birds;
        birds++;
        count++;
    }
    cout << count << endl;
    return 0;
}
