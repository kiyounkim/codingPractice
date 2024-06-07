#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int odds = 0;
    int evens = 0;
    for (int num:num_list)
        if(num%2==0) evens++;
        else odds++;
    answer.push_back(evens);
    answer.push_back(odds);
    return answer;
}