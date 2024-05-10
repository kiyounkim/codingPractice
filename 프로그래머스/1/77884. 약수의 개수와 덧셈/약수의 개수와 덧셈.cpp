#include <string>
#include <vector>

using namespace std;
int countFactors(int n){
    int count=0;
    for(int i=1;i<=n;i++)
        if(n%i==0) count++;
    return count;
}
int solution(int left, int right) {
    int answer = 0;
    for(left;left<=right;left++){
        int num = countFactors(left);
        if(num%2==0) answer+=left;
        else answer-=left;
    }
    return answer;
}