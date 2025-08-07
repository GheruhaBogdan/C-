#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Select a number: ";
    cin >> number;

    int current = 1; // start from 1

    while (current <= number) {
        cout << current << " ";
        current++;
    }

    return 0;
}
