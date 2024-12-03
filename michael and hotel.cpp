#include <iostream>
using namespace std;

int main()
{
  int a, b, i;
  cout << "First floor to stop: "; cin >> a;
  cout << "Second floor to stop: "; cin >> b;
  {
    {
      for (i = a; i == b; i++)
      cout << i;
    }
    {
      for(i = 0; i <= a; i++)
      cout << i << ", ";
    }
    {
      for(i = a - 1; i >= b; i--)
      cout << i << ", ";
    }
  }
  return 0;
}