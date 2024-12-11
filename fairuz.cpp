
#include <iostream>
using namespace std;

// Function Void untuk menambahkan dua angka
void tambahDuaAngka(int a, int b) {
    int hasil = a + b;
    cout << "Hasil penjumlahan: " << hasil << endl;
}

// Function dengan Return Value untuk menambahkan dua angka
int tambahDanKembalikan(int a, int b) {
    return a + b;
}

int main() {
    // 1. Implementasi Array 1 Dimensi dan Akses Array
    int angka[5] = {10, 20, 30, 40, 50};  // Inisialisasi array
    cout << "Angka pada index 0: " << angka[0] << endl;
    cout << "Angka pada index 3: " << angka[3] << endl;
    
    // 2. Manipulasi Array: Mengubah nilai array
    angka[2] = 35;  // Mengubah angka pada index ke-2
    cout << "Angka yang telah dimanipulasi pada index 2: " << angka[2] << endl;
    
    // 3. Penggunaan Function Void dan Function dengan Return Value
    cout << "\nMenambahkan dua angka:" << endl;
    tambahDuaAngka(5, 7);  // Function Void (Tidak ada return value)
    
    int hasilTambah = tambahDanKembalikan(3, 4);  // Function dengan return value
    cout << "Hasil penjumlahan dengan return value: " << hasilTambah << endl;
    
    // 4. Penggunaan Counter dan Beberapa Kondisi
    int kesempatan = 3;
    bool berhasil = false;
    
    while (kesempatan > 0) {
        cout << "\nTebak angka (Kesempatan tersisa: " << kesempatan << "): ";
        int tebak;
        cin >> tebak;
        
        if (tebak == 25) {
            cout << "Selamat! Tebakan Anda benar." << endl;
            berhasil = true;
            break;
        } else {
            cout << "Tebakan salah." << endl;
        }
        
        kesempatan--;  // Mengurangi kesempatan
    }
    
    if (!berhasil) {
        cout << "Maaf, Anda kehabisan kesempatan. Angka yang benar adalah 25." << endl;
    }

    // 5. Penggunaan Menu dan Looping
    int pilihan;
    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Tampilkan Angka" << endl;
        cout << "2. Manipulasi Array" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cout << "\nAngka dalam array:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << "Angka pada index " << i << ": " << angka[i] << endl;
                }
                break;
            case 2:
                {
                    int index, nilaiBaru;
                    cout << "\nMasukkan index yang ingin dimanipulasi (0-4): ";
                    cin >> index;
                    if (index >= 0 && index < 5) {
                        cout << "Masukkan nilai baru: ";
                        cin >> nilaiBaru;
                        angka[index] = nilaiBaru;
                        cout << "Array setelah manipulasi:" << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << "Angka pada index " << i << ": " << angka[i] << endl;
                        }
                    } else {
                        cout << "Index tidak valid!" << endl;
                    }
                }
                break;
            case 3:
                cout << "Terima kasih! Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi." << endl;
        }
    } while (pilihan != 3);
    
    return 0;
}