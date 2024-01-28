#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    
    for(int i=0; i<moves.size(); i++){
        int temp = moves[i]-1;
        for(int j=0;j<board[0].size(); j++){
            if(board[j][temp]!=0){
                if(!st.empty() && st.top()==board[j][temp]){
                    st.pop();
                    board[j][temp]=0;
                    answer+=2;
                    break;
                }
                else{
                    st.push(board[j][temp]);
                    board[j][temp]=0;
                    break;
                }
            }
        }
    }
    
    return answer;
}