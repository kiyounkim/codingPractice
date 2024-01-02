#include <iostream>
using namespace std;

int main() {
    int TC;
    cin >> TC;

    for(int test_case = 1; test_case <= TC; test_case++) {
        int N;
        cin >> N;
        int len = 2 * N;
        long* prices = new long[len];
        bool* check = new bool[len];
        for (int i = 0; i < len; i++) {
            cin >> prices[i];
        }
        for(int i = 0; i < len; i++) {
            check[i] = false;
        }
        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len; j++){
                if(prices[i]*4/3 == prices[j]){
                    check[i] = true;
                    prices[j] = 0;
                    break;
                }
            }
        }
        cout << "#" << test_case << " ";
        for(int i = 0; i < len; i++){
            if(check[i] && prices[i] != 0){
                cout << prices[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
