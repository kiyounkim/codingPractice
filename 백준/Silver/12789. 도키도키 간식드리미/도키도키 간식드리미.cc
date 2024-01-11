#include <iostream>
#include <stack>
using namespace std;
int main(){
  int n;
  cin >> n;
  stack<int> s;
  int count = 1;
  while(n--){
    int num;
    cin >> num;
    if(num == count)
      count++;
    else
      s.push(num);
    while(!s.empty() && s.top() == count){
      s.pop();
      count++;
    }
  }
  if(s.empty())
    cout << "Nice" << endl;
  else
    cout << "Sad" << endl;
}