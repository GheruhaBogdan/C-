#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to power up with 2: ";
    cin >> number;

    cout << "Powers of 2 up to " << number << ":\n";

    for (int currentNumber = 2; currentNumber <= number; currentNumber *= 2) {
        cout << currentNumber << endl;
    }

    cout << "Done!";
    return 0;
}
