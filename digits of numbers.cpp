#include <iostream>
using namespace std;

int main() 
{
  int orgn; int c; int nr = 0;
  cout << "Give any number: "; cin >> orgn;
  unsigned int n = orgn;
  while(n != 0)
    {
      c = n % 10;
      n = n/10;
      nr++;
    }
  cout << "The number " << orgn << " has " << nr << " digits";
  return 0;
}