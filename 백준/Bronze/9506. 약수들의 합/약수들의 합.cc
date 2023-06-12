#include <iostream>
#include <vector>
using namespace std;

int main()
{
  while(1){
    int num;
    cin >> num;
    if(num == -1) break;
    vector<int> v;
    for (int i = 1; i < num; i++)
    {
      if(num % i == 0)
        v.push_back(i);
    }
    int sum = 0;
    for(int i=0; i<v.size(); i++)
      sum += v[i];
    if(sum == num){
      cout << num << " = ";
      for(int i=0;i<v.size();i++){
        if(i!=v.size()-1) cout << v[i] << " + ";
        else cout << v[i] << endl;
      }
    }
    else
      cout << num << " is NOT perfect." << endl;
  }
  return 0;
}
