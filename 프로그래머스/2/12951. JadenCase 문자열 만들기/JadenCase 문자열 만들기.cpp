#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    bool isNewWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (isNewWord) {
            if (s[i] >= 'a' && s[i] <= 'z')
                answer += toupper(s[i]);
            else
                answer += s[i];
            isNewWord = false;
        } else
            answer += tolower(s[i]);
        if (s[i] == ' ')
            isNewWord = true;
    }
    return answer;
}
