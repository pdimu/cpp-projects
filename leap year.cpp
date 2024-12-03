#include <iostream>
using namespace std;

int main() {
  int an;
  cout << "Type an year: ";
  cin >> an;

  if ((an % 4 == 0 && an % 100 != 0) || an % 400 == 0) {
    cout << an << " it's a leap year.\n";
  } 
  else 
  {
    cout << an << " it isn't a leap year.\n";
  }

  return 0;
}