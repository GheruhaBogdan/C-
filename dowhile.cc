#include <iostream>
using namespace std;

int main() {
   int i;

   cout << "Enter a number: ";
   cin >> i;

   int current = 1;
    do {
        cout << current << " ";
        current++;
    }

    while (current <= i);
    return 0;
}
