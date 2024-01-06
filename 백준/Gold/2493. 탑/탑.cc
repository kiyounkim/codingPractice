#include <iostream>
#include <stack>
using namespace std;

int N;
stack <pair<int,int>> s;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;  
  for (int i = 1; i <= N; i++) {
    int height;
    cin >> height;
    if(s.empty()){
        s.push({height,i});
        cout << 0 << " ";
        continue;
    }
    while(s.top().first < height){
        s.pop();
        if(s.empty()) break;
    }
    if(s.empty()) cout << 0 << " ";
    else cout << s.top().second << " ";
    s.push({height,i});
  }

}