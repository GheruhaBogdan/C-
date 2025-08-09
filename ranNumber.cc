     #include <iostream>    
     using namespace std;

     int main () {
        srand(time(NULL));

        for (int i = 0; i < 1000; i++) {
            int num = (rand() % 1000) * 2;
            cout << num << " ";
        }
     }