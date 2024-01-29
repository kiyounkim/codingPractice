#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    while(x<=n){
        if(n%x==1) break;
        x++;
    }
    answer = x;
    return answer;
}