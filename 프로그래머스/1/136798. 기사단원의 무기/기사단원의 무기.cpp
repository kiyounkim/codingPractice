#include <vector>
#include <algorithm>  // For std::min

using namespace std;

vector<int> computeDivisors(int n) {
    vector<int> divisors(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            divisors[j]++;
        }
    }
    return divisors;
}

int solution(int number, int limit, int power) {
    vector<int> divisors = computeDivisors(number);
    int answer = 0;
    for (int i = 1; i <= number; ++i) {
        if (divisors[i] > limit) {
            answer += power;
        } else {
            answer += divisors[i];
        }
    }
    return answer;
}
