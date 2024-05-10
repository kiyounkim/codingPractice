#include <string>
#include <vector>
#include <cctype>  // For toupper() and tolower()

using namespace std;

string solution(string s) {
    string answer = "";
    int p = 0; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            p = 0;
            answer += ' ';
        } else {
            if (p % 2 == 0) answer += toupper(s[i]);
            else answer += tolower(s[i]);
            p++;
        }
    }
    return answer;
}
