#include <iostream>
#include <string>

using namespace std;

int main()
{
  string num1, num2, result;
  cin >> num1 >> num2;
  int carry = 0;
  int size1 = num1.size();
  int size2 = num2.size();

  while (size1 > 0 || size2 > 0)
  {
    int digit1 = 0;
    if (size1 > 0)
      digit1 = num1[--size1] - '0';

    int digit2 = 0;
    if (size2 > 0)
      digit2 = num2[--size2] - '0';

    int sum = digit1 + digit2 + carry;
    carry = sum / 10;
    sum %= 10;

    char digitChar = sum + '0';
    result += digitChar;
  }

  if (carry > 0)
    result += carry + '0';

  for (int i = result.length() - 1; i >= 0; i--)
    cout << result[i];
  return 0;
}
