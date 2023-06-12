#include <iostream>

using namespace std;

int main()
{
  int a , b;
  cin >> a >> b;
  int count = 0;
  int ans;
  for(int i=1;i<=a;i++)
  {
    if(a%i==0&&count!=b)
    {
      ans = i;
      count++;
    }
  }
  if(count<b) cout << 0 << endl;
  else cout << ans << endl;
  return 0;
}
