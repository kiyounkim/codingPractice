#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> numStrings = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> nums = {"0","1","2","3","4","5","6","7","8","9"};
    for(int i=0;i<nums.size();i++){
        auto pos = 0;
        while ((pos = s.find(numStrings[i], pos)) != string::npos) {
            s.replace(s.find(numStrings[i]), numStrings[i].length(), nums[i]);
            pos += nums[i].length(); 
        }
    }
    return stoi(s);
}