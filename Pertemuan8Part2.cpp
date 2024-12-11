#include "bits/stdc++.h"
using namespace std;

int main () {
    int baris,kolom;
    cout << "Masukkan baris : "; cin >> baris;
    cout << "Masukkan kolom : "; cin >> kolom;

    int matrix[baris][kolom];

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cout << "Masukkan Nilai ke-["<< i <<"]["<< j <<"] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
}