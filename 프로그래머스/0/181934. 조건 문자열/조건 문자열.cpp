#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if(eq=="="){
        if(ineq==">")
            return n>=m;
        else
            return n<=m;
    }
    else{
        if(ineq==">")
            return n>m;
        else
            return n<m;
    }
    return answer;
}