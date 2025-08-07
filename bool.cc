#include <iostream>
using namespace std;

int main() {
    int age;
    int ageToVote = 18;

    cout << "Enter your age to vote: ";
    cin >> age;

    if (age >= ageToVote) {
        cout << "You are old enough to vote";
    } else {
        cout << "Not old enough to vote";
    }
}