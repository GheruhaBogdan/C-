#include <iostream>
#include <string>
using namespace std;

int main () {
    int y;
    int price = 5000;

    cout << "Give 5000 dollars to purchase a car: ";
    cin >> y;

    if (y >= 5000) {
        cout << "Mercedes, BMW" << endl;
   int x;
   string cars[2] {"Mercedes", "BMW"};

    cout << "Which car do you want? (Choose 0-1):  ";
    cin >> x;
    
    if (x >= 0 && x < 2) {
        cout << "Thanks for purchasing: " << cars[x];

    } else {
        cout << "Invalid number!";
    }
    return 0;
    }

   
}