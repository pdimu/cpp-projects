#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "First kid is ... years old: ";
    cin >> a;

    cout << "Second kid is ... years old: ";
    cin >> b;

    if (a > b) {
        cout << "First kid is bigger than the other one with " << (a - b) << " years.\n";
    } else if (b > a) {
        cout << "Second kid is bigger than the other one with " << (b - a) << " years.\n";
    }
    return 0;
}