#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int t = slice;
    while(n>slice){
        answer++;
        slice+=t;
    }
    return ++answer;
}