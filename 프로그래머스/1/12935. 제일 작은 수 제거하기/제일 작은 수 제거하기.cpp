#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = *min_element(arr.begin(),arr.end());
    for(int num : arr){
        if(num!=min) answer.push_back(num);
    }
    return answer;
}