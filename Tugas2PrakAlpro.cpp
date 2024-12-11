#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nama, member;
    int umur, cash;
    float saldo;
    char cek;
    bool kembali;
    // input data
    cout << "=" << setfill('=') << setw(60) << "=" << "=";
    cout << setfill(' ') << endl;
    cout << "|" << setw(61) << "|" << endl;
    cout << "|" << setw(35) << "Input Data User" << setw(26) << "|";
    cout << setfill(' ') << endl;
    cout << "|" << setw(61) << "|" << endl;
    cout << "=" << setfill('=') << setw(60) << "=" << "=" << endl;
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan Umur : ";
    cin >> umur;
    cout << endl;
     cout << "Daftar Member\n";
    cout << "1. Immortal\n";
    cout << "2. Glory\n";
    cout << "3. Honor\n";
    cout << "4. Warrior - Mythic\n";
    cout << "Masukkan Nama Member : ";
    cin >> member;
    cout << endl;
    cout << "Masukkan saldo : Rp ";
    cin >> saldo;
    cout << "Masukkan cash : Rp ";
    cin >> cash;
    do
    {
    system("pause");
    system("cls");
    // menu barang
    string namabarang;
    int barang, pensil, buku, penggaris, penghapus;
    float money, diskon, dibeli;
    bool cetak = false, namabenda;
    cout << "=" << setfill('=') << setw(60) << "=" << "=";
    cout << setfill(' ') << endl;
    cout << "|" << setw(61) << "|" << endl;
    cout << "|" << setw(35) << "Toko Adem" << setw(26) << "|";
    cout << setfill(' ') << endl;
    cout << "|" << setw(61) << "|" << endl;
    cout << "=" << setfill('=') << setw(60) << "=" << "=" << endl;
    cout << "1. Bolpen\n";
    cout << "2. Buku gambar\n";
    cout << "3. Penggaris\n";
    cout << "4. Penghapus\n";
    cout << "5. Cetak Uang Anda\n\n";
    cout << "------------------------------\n";
    cout << "0. Keluar\n";
    cout << "Pilih Menu : ";
    cin >> barang;

    switch (barang)
    {
    case 1:
        namabarang = "Bolpen";
        namabenda = false;
    break;
    case 2:
        namabarang = "Buku Gambar";
        namabenda = false;
    break;
    case 3:
        namabarang = "Penggaris";
        namabenda = false;
    break;
    case 4:
            namabarang = "Penghapus";
            namabenda = false;
    break;
    case 5:
            namabenda = true;
    break;
    default:
    break;
  }
        if (!namabenda)
        {
            cout << "=" << setfill('=') << setw(60) << "=" << "=";
            cout << setfill(' ') << endl;
            cout << "|" << setw(61) << "|" << endl;
            cout << "|" << setw(35) << namabarang << setw(26) << "|";
            cout << setfill(' ') << endl;
            cout << "|" << setw(61) << "|" << endl;
            cout << "=" << setfill('=') << setw(60) << "=" << "=" << endl;
        }


        switch (barang)
        {
        case 1:
            cout << "Berapa Bolpen yang ingin anda beli? : ";
            cin >> pensil;
            dibeli = pensil * 2000;
            break;
        case 2:
            cout << "Berapa Buku Gambar yang ingin anda beli? : ";
            cin >> buku;
            dibeli = buku * 5000;
            break;
        case 3:
            cout << "Berapa Penggaris yang ingin anda beli? : ";
            cin >> penggaris;
            dibeli = penggaris * 3000;
            break;
        case 4:
            cout << "Berapa Penghapus yang ingin anda beli? : ";
            cin >> penghapus;
            dibeli = penghapus * 4000;
            break;
        case 5:
            cetak = true;
            break;
        case 0:

            break;

        default:
            break;
  }
        // cetak uang
        if (cetak)
        {
            cout << endl;
            cout << "=" << setfill('=') << setw(60) << "=" << "=";
            cout << setfill(' ') << endl;
            cout << "|" << setw(61) << "|" << endl;
            cout << "|" << setw(35) << "Uang anda saat ini" << setw(26) << "|";
            cout << setfill(' ') << endl;
            cout << "|" << setw(61) << "|" << endl;
            cout << "=" << setfill('=') << setw(60) << "=" << "=" << endl;
            cout << "Nama : " << nama;
            cout << "\nUmur : " << umur;
            cout << "\nMember : " << member;
            cout << "\nSaldo : " << saldo;
            cout << "\nCash : " << cash;
        }
        else if (cetak == false)
        {
            if (saldo <= 0 && cash > 0)
    {
                cout << "\nSaldo anda saat ini 0 Rupiah\n";
                cout << "Transaksi dialihkan menggunakan cash\n";
                cout << "Dan anda tidak mendapatkan diskon/promo\n";
                cash = cash - dibeli;
                cout << "Diskon 15% karena member Immortal\n";
                cout << "Total Belanja anda adalah : " << dibeli;
                cout << "\nSisa cash anda : " << cash;
            

            }else if (saldo <= 0 | saldo <= dibeli && cash <= 0 | cash <= dibeli)
            {
                cout<<"\nSaldo ataupun cash anda tidak mencukupi untuk transaksi ini\n";
                cout<<"Transaksi dibatalkan\n";
                return 0;
            }
            else
            {
                if (member == "Immortal")
                {
                    money = dibeli - ((15.0 / 100) * dibeli);
                    saldo = saldo - money;
                    cout << "Diskon 15% karena member Immortal\n";
                    cout << "Total Belanja anda adalah : " << money;
                    cout << "\nSisa saldo anda : " << saldo;
                }
 else if (member == "Glory")
                {

                    money = dibeli - ((10.0 / 100) * dibeli);
                    saldo = saldo - money;
                    cout << "Diskon 10% karena member Glory\n";
                    cout << "Total Belanja anda adalah : " << money;
                    cout << "\nSisa saldo anda : " << saldo;
                }
                else if (member == "Honor")
                {
                    money = dibeli - ((5.0 / 100) * dibeli);
                    saldo = saldo - money;
                    cout << "Diskon 5% karena member Honor\n";
                    cout << "Total Belanja anda adalah : " << money;
                    cout << "\nSisa saldo anda : " << saldo;
                }
                else if (member == "Warrior - Mythic")
                {
                    money = dibeli;
                    saldo = saldo - money;
                    cout << "Diskon tidak ada karena member Warrior - Mythic\n";
                    cout << "Total Belanja anda adalah : " << money;
                    cout << "\nSisa saldo anda : " << saldo;
                }
            }
        }
        cout << "\nApakah anda ingin lanjut?(y/n) : ";
        cin >> cek;
        if (cek == 'y')
        {
            kembali = false;
        }
        else
        {
            kembali = true;
        }

    } while (!kembali);
    
return 0;
}