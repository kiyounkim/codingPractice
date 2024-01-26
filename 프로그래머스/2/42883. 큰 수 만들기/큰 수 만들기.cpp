#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) {
    stack<char> s;

    for (char digit : number) {
        while (!s.empty() && s.top() < digit && k > 0) {
            s.pop();
            k--;
        }
        s.push(digit);
    }

    while (k--)
        s.pop();

    string answer = "";
    while (!s.empty()) {
        answer = s.top() + answer;
        s.pop();
    }

    return answer;
}
