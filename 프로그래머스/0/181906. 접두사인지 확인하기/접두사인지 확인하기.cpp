#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string s = my_string.substr(0,is_prefix.length());
    answer =  (s == is_prefix);
    return answer;
}