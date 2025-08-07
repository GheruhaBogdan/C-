#include <iostream>
#include <iostream>
using namespace std;

int main() {
   string fullName;
   int x;

   cout<< "Enter your full name";
   getline(cin, fullName);
   
   cout<< "Enter your age";
   cin >> x;

   cout<< "Your full name is: " << fullName << "\n";
   cout <<"Your age is: " << x;
   
}