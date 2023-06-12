#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int count=0;
  for(int i=0;i<n;i++){
    int temp;
    cin >> temp;
    if(temp==2) {
      count++;
      continue;
    }
    for(int j=2;j<temp;j++){
      if(temp%j==0) break;
      //cout << temp << "%" << j << "=" << temp%j <<endl;
      if(j==temp-1)
        count++;
    }
  }
  cout << count << endl;
}
