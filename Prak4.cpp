#include <bits/stdc++.h>
using namespace std;

float hitungRataRata(const vector<float>& nilai) {
    float total = 0;
    for (float n : nilai) {
        total += n;
    }
    return total / nilai.size();
}

float hitungModus(const vector<float>& nilai) {
    unordered_map<float, int> frekuensi;
    int maxCount = 0;
    float modus = nilai[0];

    for (float n : nilai) {
        frekuensi[n]++;
        if (frekuensi[n] > maxCount) {
            maxCount = frekuensi[n];
            modus = n;
        }
    }
    
    return modus;
}

int main() {
    int jumlah;
    cout << "Masukkan Jumlah Data Mahasiswa: ";
    cin >> jumlah;

    vector<string> nama(jumlah);
    vector<float> nilai(jumlah);

    for (int i = 0; i < jumlah; i++) {
        cout << "Data Mahasiswa Ke-" << (i + 1) << endl;
        cout << "Masukkan Nama Lengkap: ";
        cin.ignore(); // Mengabaikan newline dari input sebelumnya
        getline(cin, nama[i]); // Menggunakan getline untuk nama
        cout << "Masukka Nilai [0-100] : ";
        cin >> nilai[i];
        cout << endl;
    }

    float rataRata = hitungRataRata(nilai);
    float modus = hitungModus(nilai);

    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa Ke-" << (i + 1) << endl;
        cout << "Nama Lengkap: " << nama[i] << endl;
        cout << "Nilai: " << nilai[i] << endl;
        cout << endl;
    }

    cout << "Rata-Rata Nilai: " << rataRata << endl;
    cout << "Modus Nilai: " << modus << endl;

    return 0;
}