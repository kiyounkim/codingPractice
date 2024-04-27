#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool flag = true;
    for(int i=0;i<code.length();i++){
        if(code[i]=='1'){
            flag = !flag;
            continue;
        }
        if(flag == true)
            if(i%2==0) answer+=code[i];
        if(flag == false)
            if(i%2!=0) answer+=code[i];
    }
    if(answer.length()<1) return "EMPTY";
    return answer;
}