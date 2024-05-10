#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b)
        for(;b<=a;b++)
            answer+=b;
    else if(a<b)
        for(;a<=b;a++)
            answer+=a;
    else return a;
    return answer;
}