#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(n>0){
        if(n%2!=0)
            answer.push_back(n);
        n--;
    }
    sort(answer.begin(),answer.end());
    return answer;
}