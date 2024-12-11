#include <iostream>
using namespace std;

int main() {
    string nim, nama;
    int total_sks, sks_pilihan, sks_nilai_E, lama_lulus;
    float IPK,sks_nilai_D;
 
    cout << "Masukkan NIM: "; 
    cin >> nim;
    cout << "Masukkan Nama: "; 
    cin.ignore();
    getline(cin,nama);
    cout << "Masukkan Total SKS: "; 
    cin >> total_sks;
    cout << "Masukkan IPK: "; 
    cin >> IPK;
    cout << "Masukkan Jumlah SKS Mata Kuliah Pilihan: "; 
    cin >> sks_pilihan;
    cout << "Masukkan Jumlah SKS Nilai D: "; 
    cin >> sks_nilai_D;
    cout << "Masukkan Jumlah SKS Nilai E: "; 
    cin >> sks_nilai_E;
    cout << "Masukkan Lama Lulus (Semester): "; 
    cin >> lama_lulus;

    if (IPK >= 2.25 && total_sks >= 144 && sks_pilihan >= 15 && sks_nilai_D <= 0.25 * total_sks && sks_nilai_E == 0) {
        cout << nama << " (" << nim << ") dinyatakan LULUS.\n";
       
        if (IPK >= 3.51 && lama_lulus <= 8) {
            cout << "Predikat: Dengan Pujian (Cumlaude)\n";
            cout << "Dapat diusulkan mendapatkan Karya Cendikia.\n";
        } 
        else if (IPK >= 3.01 && IPK <= 3.50 || (IPK >= 3.51 && lama_lulus > 8)) {
            cout << "Predikat: Sangat Memuaskan (Very Satisfactory)\n";
        } 
        else if (IPK >= 2.76 && IPK <= 3.00) {
            cout << "Predikat: Memuaskan (Satisfactory)\n";
        }
    } 
    else {
        cout << nama << " (" << nim << ") dinyatakan TIDAK LULUS.\n";
    }

return 0;
}