#include "bits/stdc++.h"
using namespace std;

int main () {
    int nilai[5];

    // cout << "Masukkan nilai ke-0 : "; cin >> nilai[0];
    // cout << "Masukkan nilai ke-1 : "; cin >> nilai[1];
    // cout << "Masukkan nilai ke-2 : "; cin >> nilai[2];
    // cout << "Masukkan nilai ke-3 : "; cin >> nilai[3];
    // cout << "Masukkan nilai ke-4 : "; cin >> nilai[4];

//Satu DImensi
    // for (int i = 0; i < 5; ++i) {
    //     cout << "Masukkan nilai ke-" << i << " : "; 
    //     cin >> nilai [1];
    // }
    
    // cout << endl;

    // for (int i = 0; i < 5; ++i) { 
    //     cout << nilai [1] << " ";
    // }

//DUA DIMENSI
    int matrix[2][3] = {(1, 2, 3),
                        (4, 5, 9)};
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cout << "Masukkan Nilai ke-["<< i <<"]["<< j <<"] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    
}