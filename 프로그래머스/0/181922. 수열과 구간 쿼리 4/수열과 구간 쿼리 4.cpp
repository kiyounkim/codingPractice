#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(int n=0;n<queries.size();n++){
        for(int i=queries[n][0];i<=queries[n][1];i++){
            int k = queries[n][2];
            if(i%k==0) answer[i]++;
        }
    }
    return answer;
}