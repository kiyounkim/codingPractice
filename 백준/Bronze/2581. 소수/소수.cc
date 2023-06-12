#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main()
{
    int M, N;
    cin >> M >> N;
    int sum = 0;
    int min = 10001;
    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min > i) min = i;
        }
    }
    if (sum == 0)
        cout << -1 << endl;
    else
        cout << sum << "\n" << min << endl;
    return 0;
}
