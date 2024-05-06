#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    for(int i = 1; i * i <= yellow; i++){
        if(yellow % i > 0) continue;

        int inner_w = yellow / i;
        int inner_h = i;         
        if((inner_w + 2) * 2 + (inner_h + 2) * 2 - 4 == brown){
            answer.push_back(inner_w + 2);
            answer.push_back(inner_h + 2);
            break;
        }
    }    

    return answer;
}
