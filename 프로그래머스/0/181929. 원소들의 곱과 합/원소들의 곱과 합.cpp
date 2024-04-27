#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    long long sums = 0;
    long long mult = 1;
    for(int i=0;i<num_list.size();i++){
        sums+=num_list[i];
        mult*=num_list[i];
    }
    if(mult < sums*sums) return 1;
    else return 0;
}