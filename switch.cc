#include <iostream>
using namespace std;

int main() {
   int day;

   cout << "Select a day in the week: ";
   cin >> day;

   switch (day)
   {
   case 1: 
     cout << "Today is Monday";
      break;
   case 2:
   cout << "Today is Tuesday";
      break;
   case 3:
   cout<< "Today is Wednesday";
     break;
     case 4:
     cout << "Today is Thursday";
     break;
     case 5:
     cout << "Today is Friday";
     break;
     case 6:
     cout << "Today is Saturday";
     break;
     case 7:
     cout << "Today is Sunday";

   default:
   cout <<"Choose 1-7";
      break;
   }
}