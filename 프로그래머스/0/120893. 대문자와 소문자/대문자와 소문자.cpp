#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0;i<my_string.length();i++){
        if(my_string[i]<='Z'&&my_string[i]>='A')
            answer+=my_string[i]-'A'+'a';
        else
            answer+=my_string[i]-'a'+'A';
    }
    return answer;
}