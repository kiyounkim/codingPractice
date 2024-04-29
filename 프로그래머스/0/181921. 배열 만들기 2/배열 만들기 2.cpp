#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++) {
        string num = to_string(i);
        bool flag = true;
        for(int j = 0; j < num.length(); j++) {
            if(num[j] != '5' && num[j] != '0') { // corrected condition
                flag = false;
                break;
            }
        }
        if(flag == true)
            answer.push_back(stoi(num));
    }
    if(answer.size()<1) answer.push_back(-1);
    return answer;
}
