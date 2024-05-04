#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s = "";
    for(int i=my_string.length()-1;i>=0;i--){
        s = my_string.substr(i,my_string.length());
        answer.push_back(s);
    }
    sort(answer.begin(),answer.end());
    return answer;
}