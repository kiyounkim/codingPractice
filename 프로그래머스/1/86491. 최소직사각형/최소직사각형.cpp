#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxWidth = 0;
    int maxHeight = 0;
    for(int i=0;i<sizes.size();i++){
        int v = max(sizes[i][0],sizes[i][1]);
        int h = min(sizes[i][0],sizes[i][1]);
        maxWidth = max(v,maxWidth);
        maxHeight = max(h,maxHeight);
    }
    answer = maxWidth * maxHeight;
    return answer;
}