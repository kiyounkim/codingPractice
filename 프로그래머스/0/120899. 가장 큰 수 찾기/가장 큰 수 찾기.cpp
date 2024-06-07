#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = *max_element(array.begin(),array.end());
    answer.push_back(max);
    answer.push_back(find(array.begin(), array.end(), max)-array.begin());
    return answer;
}