#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    string s;
    while (n > 0) {
        s += to_string(n % 3);
        n /= 3;
    }
    for (int i = 0; i < s.length(); i++) {
        answer += (s[i] - '0') * pow(3, s.length()-i-1);
    }
    return answer;
}
