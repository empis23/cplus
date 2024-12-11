#include <iostream>
using namespace std; 

int main() {
    string nama,alamat;
    cout<< "Masukkan Nama : ";
    cin>> nama;
    cin.ignore();
    cout<< "Masukkan Alamat : ";
    getline(cin, alamat);
    cout<< "Nama:" << nama << endl;
    cout<< "Alamat:" << alamat << endl;
}