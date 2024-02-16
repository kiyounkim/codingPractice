#include <iostream>
#include <algorithm>
using namespace std;

void solution(int num, int from, int by, int to){
    if(num == 1){
        cout << from << " " << to << "\n";
        return;
    }
    solution(num-1, from, to, by);
    cout << from << " " << to << "\n";
    solution(num-1, by, from, to);

}
int main() {
    int N;
    cin >> N;
    cout << (1<<N) - 1 << "\n";
    solution(N, 1, 2, 3);
}