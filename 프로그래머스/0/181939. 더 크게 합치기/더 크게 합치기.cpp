#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    answer=max(stoi(to_string(a)+to_string(b)),stoi(to_string(b)+to_string(a)));
    return answer;
}