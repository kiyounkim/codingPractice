#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int last =answer[answer.size()-1];
    int lastP = answer[answer.size()-2];
    if(last>lastP)
        answer.push_back(last-lastP);
    else
        answer.push_back(last*2);
    return answer;
}