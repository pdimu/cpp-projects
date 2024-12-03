#include <iostream>
using namespace std;

int main() 
{
  int c;
  cout << "Type c variable: ";
  cin >> c;

  for (int a = 1; a <= 9; ++a) 
  {
    cout << a << "x" << c << "=" << a * c << endl;
  }

  return 0;
}