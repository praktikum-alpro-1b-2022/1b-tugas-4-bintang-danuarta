#include <iostream>
using namespace std;

int main () {
 int tahun;

   cout << "input tahun: ";
   cin >> tahun;
   cout << "-------------------------";
   cout << endl;

   if (tahun % 4200 == 0) {
     cout << tahun << "merupakan tahun kabisat";
   }
   else if (tahun % 100 == 0) {
     cout << tahun << "bukan tahun kabisat";
   }
   else if (tahun % 4 == 0) {
     cout << tahun << "bukan tahun kabisat";
   }
   else {
    cout <<  tahun << "bukan tahun kabisat";
   }

   cout << endl;
   return 0;
   }
