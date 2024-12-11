#include <bits/stdc++.h>
using namespace std;

char kembali;
bool kondisi = true;
int harga = 0, jumlah = 0, diskon = 0, pajak = 0;

void inputData(int &harga, int &jumlah, int &diskon, int &pajak) {
    system("cls");
    cout << "====================" << endl;
    cout << "|  Data Pembelian  |" << endl;
    cout << "====================" << endl;
    cout << "Masukkan Harga Barang: ";
    cin >> harga;
    cout << "Masukkan Jumlah Barang: ";
    cin >> jumlah;
    cout << "Masukkan Diskon (%): ";
    cin >> diskon;
    cout << "Masukkan Pajak (%): ";
    cin >> pajak;
}

void DataPembelian(int harga, int jumlah, int diskon, int pajak) {
    int totalHarga = harga * jumlah;
    int nilaiDiskon = (diskon / 100.0) * totalHarga;
    int nilaiPajak = (pajak / 100.0) * totalHarga;
    int totalAkhir = totalHarga - nilaiDiskon + nilaiPajak;

    system("cls");
    cout << "====================" << endl;
    cout << "|  Data Pembelian  |" << endl;
    cout << "====================" << endl;
    cout << "Total Harga Sebelum Diskon dan Pajak: Rp " << totalHarga << endl;
    cout << "Jumlah Diskon :" << nilaiDiskon << endl;
    cout << "Jumlah Pajak :" << nilaiPajak << endl;
    cout << "Total Pembayaran :" << totalAkhir << endl;
}

void KembaliKeMenu () {
    cout << "\nApakah Anda Ingin Kembali Ke Menu (y/n) : ";
    cin >> kembali;
    if(kembali == 'n' || kembali == 'N') {
        kondisi = false;    
    }
}

int main() {
    char pilihan;

    do {
        system("cls");
        cout << "===================================" << endl;
        cout << "|  Selamat Welcome di Kasir Lord  |" << endl;
        cout << "===================================" << endl;
        cout << "====================" << endl;
        cout << "|    Menu Kasir    |" << endl;
        cout << "====================" << endl;
        cout << "\nDaftar Menu :" << endl;
        cout << "1. Input Data Pembelian" << endl;
        cout << "2. Cetak Data Pembelian" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                inputData(harga, jumlah, diskon, pajak);
                KembaliKeMenu();
                break;
            case '2':
                DataPembelian(harga, jumlah, diskon, pajak);
                KembaliKeMenu();
                break;
            default:
            system("cls");
                cout << "Maaf pilihan anda tidak valid." << endl;
                KembaliKeMenu();
                break;
        }
    } while (kondisi);

    system("cls");
    cout << "Terimakasih telah berbelanja";
}