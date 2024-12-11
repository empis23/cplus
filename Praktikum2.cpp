#include <iostream>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan Angka : ";
    cin >> angka;
    // if (angka > 0) {
    //     cout << "positif";
    // } else if (angka < 0) {
    //     cout << "negatif";
    // } else {
    //     cout << "noolllll";
    // }

    // if (5 <= angka) {
    //     if (angka <= 10){
    //         cout << "Halo Ndes";
    //     }
    // }

    if (angka > 0) {
        cout << "positif" << endl;
    }
    if (angka % 2 == 0) {
        cout << "genap" << endl;
    } else {
        cout << "ganjil" << endl;
    }

}