#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    cout  <<  setw ( 40 ) << setfill ( '=' ) <<  std:: setw ( 40 )  <<  " \n " ; 
    cout <<"Program Penilaian Akademik UPNYK" <<endl;
    cout  <<  setw ( 40 ) << setfill ( '=' ) <<  setw ( 40 )  <<  " \n " ; 

    float nilai_kuis, nilai_responsi, nilai_tugas, nilai_akhir;
    string a;
    string Grade;
    cout << "\tNilai Kuis\t\t : ";cin >> nilai_kuis;
    cout << "\tNilai Responsi\t\t : ";cin >> nilai_responsi;
    cout << "\tNilai Tugas\t\t : ";cin >> nilai_tugas;

    

    cout <<"Apakah Mahasiswa Merupakan Mahasiswa Yang Aktif Dalam Praktikum ? (y/n) :"; cin >> a;
    if (a=="y"){
    cout <<fixed;
    cout <<setprecision(2) <<"\tNilai Kuis\t\t : " << nilai_kuis <<endl;
    cout << setprecision(2) << "\tNilai Responsi\t\t : "<< nilai_responsi <<endl;
    cout << setprecision(2) << "\tNilai Tugas\t\t : "<< nilai_tugas <<endl;
    cout << setprecision(2) << "\tBertisipasi Aktif\t : " << "Ya" <<endl;
    nilai_akhir = (nilai_kuis*0.35) + (nilai_responsi*0.40) + (nilai_tugas*0.25);
    if (nilai_akhir < 85){
        nilai_akhir = nilai_akhir+5;
    }
    cout << setprecision(2) <<"\tNilai Akhir\t\t : " <<nilai_akhir<<endl;

    if (nilai_akhir >= 85.00) {
        Grade = "A"; 
    } else if (nilai_akhir <= 84.99) { 
        Grade = "B";
    } else if (nilai_akhir <= 69.99) { 
        Grade = "C";
    } else if (nilai_akhir <= 50.00) { 
        Grade = "D";
    } else {
        cout << "Tidak Dapat Ditentukan" <<endl;
    }

    cout << "\tGrade \t\t\t : " << Grade << endl;


        }  
    else if (a=="n") {
    cout <<fixed;
    cout << setprecision(2) <<"\tNilai Kuis\t\t : " << nilai_kuis <<endl;
    cout << setprecision(2) << "\tNilai Responsi\t\t : "<< nilai_responsi <<endl;
    cout << setprecision(2) <<"\tNilai Tugas\t\t : "<< nilai_tugas <<endl;
    cout <<setprecision(2) << "\tBertisipasi Aktif\t : " << "Ya" <<endl;
    nilai_akhir = (nilai_kuis*0.35) + (nilai_responsi*0.40) + (nilai_tugas*0.25);
    cout << setprecision(2) <<"\tNilai Akhir\t\t : " <<nilai_akhir<<endl;

    if (nilai_akhir >= 85.00) {
        Grade = "A"; 
    } else if (nilai_akhir <= 84.99) { 
        Grade = "B";
    } else if (nilai_akhir <= 69.99) { 
        Grade = "C";
    } else if (nilai_akhir <= 50.00) { 
        Grade = "D";
    } else {
        cout << "Tidak Dapat Ditentukan" <<endl;
    }

    cout << "\tGrade \t\t\t : " << Grade << endl;

    }
    

}