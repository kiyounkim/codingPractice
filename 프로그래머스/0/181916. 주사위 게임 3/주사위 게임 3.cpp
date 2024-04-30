#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int dice[4]={a,b,c,d};
    sort(dice,dice+4);
    if(dice[0] == dice[3])
        answer = 1111*dice[0];
    else if (dice[0] == dice[2] || dice[1] == dice[3]) 
        answer = pow(dice[1] * 10 + (dice[0] + dice[3] - dice[1]), 2);
    else if (dice[0] == dice[1] && dice[2] == dice[3])
        answer = (dice[0] + dice[3]) * (dice[3] - dice[0]);
    else if (dice[0] == dice[1]) 
        answer = dice[2] * dice[3];
    else if (dice[1] == dice[2]) 
        answer = dice[0] * dice[3];
    else if (dice[2] == dice[3]) 
        answer = dice[0] * dice[1];
    else 
        answer = dice[0];
    
    return answer;
}