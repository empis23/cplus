#include <iostream>
using namespace std;
int main() {
    int tahunLahir;
    string namaLengkap;
    int NIM;
    double tinggiBadanM;
    char harapanNilai;
    int praktikumSeru= 1;

    cout<<"Masukan tahun lahir : ";

    cin>>tahunLahir;
    cout<<"Masukan nama lengkap : ";
    cin.ignore();
    getline(cin, namaLengkap);
    cout<<"Masukan NIM : ";
    cin>>NIM;
    cout<<"Masukan Tinggi Badan (m) : ";
    cin>>tinggiBadanM;
    cout<<"Harapan Nilai Praktikum Algoritma dan Pemrogaman I : ";
    cin>>harapanNilai;
    cout<<"Praktikum Algoritma dan Pemrogaman I seru : ";
    cin>>praktikumSeru;
    
    int umur = 2024 - tahunLahir ; //calculate umur
    double tinggiBadanCm = tinggiBadanM * 100 ; //convert tinggiBadan to cm

    cout<<"Biodata Anda : "<<endl;
    cout<<"Umur : " << umur <<endl;
    cout<<"Nama Lengkap : "<<namaLengkap<<endl;
    cout<<"NIM : "<<NIM<<endl;
    cout<<"TinggiBadan (cm) : "<<tinggiBadanCm<<endl;
    cout<<"Harapan Nilai Praktikum Algoritma dan Pemrogaman I : "<<harapanNilai<<endl;
    cout<<"Praktikum Algoritma dan Pemrogaman I seru : "<<praktikumSeru<<endl;
    return 0;
}