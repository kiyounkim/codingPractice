#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int n = score.size();
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
        pq.push(score[i]);
    deque<int> temp;
    while(!pq.empty()){
        temp.push_back(pq.top());
        pq.pop();
        if(temp.size()==m){
            answer+=m*temp.back();
            temp.clear();
        }
    }    
    return answer;
}