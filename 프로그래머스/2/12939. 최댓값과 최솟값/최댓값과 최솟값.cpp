#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> nums;
    string temp = "";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            nums.push_back(stoi(temp));
            temp = "";
            continue;
        }
        temp += s[i];
    }
    nums.push_back(stoi(temp));
    sort(nums.begin(),nums.end());
    answer += to_string(nums[0]) + " " + to_string(nums[nums.size()-1]);
    return answer;
}