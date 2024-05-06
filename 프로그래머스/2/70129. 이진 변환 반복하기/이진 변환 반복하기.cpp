#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

string tobinary(int n){
    string s = "";
    while(n > 0){
        s += to_string(n % 2);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
vector<int> solution(string s) {
    vector<int> answer;
    int zeros = 0;
    int count = 0;
    string num = s;
    while(num != "1"){
        string temp = "";
        for (char c : num) {
            if (c == '0')
                zeros++;
            else 
                temp += c;
        }
        num = tobinary(temp.size());
        count++;
    }
    answer.push_back(count);
    answer.push_back(zeros);

    return answer;
}