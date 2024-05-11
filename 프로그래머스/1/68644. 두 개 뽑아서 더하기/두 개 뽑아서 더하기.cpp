#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=1;i<numbers.size();i++){
        for(int j=i-1;j>=0;j--){
            if (find(answer.begin(), answer.end(), numbers[i]+numbers[j]) == answer.end())
                answer.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}