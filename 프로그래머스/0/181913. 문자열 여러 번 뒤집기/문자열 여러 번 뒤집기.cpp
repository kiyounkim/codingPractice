#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(int i=0;i<queries.size();i++){
        int start = queries[i][0];
        int end = queries[i][1] + 1; 
        reverse(answer.begin() + start, answer.begin() + end);
    }
    return answer;
}