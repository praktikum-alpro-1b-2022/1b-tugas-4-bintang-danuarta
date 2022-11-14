#include <iostream>
using namespace std;
int main() {
 string username;
 string password;
 cout << "Masukkan username: ";
 cin >> username;
 cout << "Masukkan password: ";
 cin >> password;
 if (username == "bintang" && password == "12345") {
    cout << "Username dan pasword sesuai, Login berhasil" << endl;
 }else if (username == "bintang" && password != "12345") {
    cout << "Username sesuai, password tidak sesuai!" << endl;
 }else if (username != "bintang" && password == "12345") {
    cout << "Username tidak sesuai, password sesuai!" << endl;
 }else {
    cout << "Username dan password tidak sesuai!" << endl;
 }

 return 0;
}
