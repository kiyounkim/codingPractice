#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = 1;
    int b = min(n,m);
    for(int i=1;i<=b;i++){
        if(n%i==0 && m%i==0 && i>gcd) gcd = i;
    }
    answer.push_back(gcd);
    answer.push_back((n*m)/gcd);
    return answer;
}