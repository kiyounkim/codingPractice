#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> s;

    for (int i = 0; i < ingredient.size(); i++) {
        s.push(ingredient[i]);
        
        if (s.size() >= 4) {
            int fourth = s.top(); s.pop();
            int third = s.top(); s.pop();
            int second = s.top(); s.pop();
            int first = s.top(); s.pop();

            if (first == 1 && second == 2 && third == 3 && fourth == 1) {
                answer++;
            } else {                
                s.push(first);
                s.push(second);
                s.push(third);
                s.push(fourth);
            }
        }
    }
    return answer;
}
