#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string s;
    for(int i = 0; i <= t.length() - p.length(); i++) {
        s="";
        for(int j = i; j < i + p.length(); j++)
            s += t[j];
        if(stoll(s) <= stoll(p)) answer++;
    }
    return answer;
}
