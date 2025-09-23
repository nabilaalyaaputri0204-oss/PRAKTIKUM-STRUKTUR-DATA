#include <iostream>
#include <string>
using namespace std;

const int MAX_LAGU = 50; 

int main() {
    string judul[MAX_LAGU];
    string penyanyi[MAX_LAGU];
    float durasi[MAX_LAGU];
    int jumlahLagu = 0;
    int pilihan;

    do {
        // Menu utama
        cout << "\n=== SPORTIFY SEDERHANA ===" << endl;
        cout << "1. Tambah Lagu" << endl;
        cout << "2. Tampilkan Daftar Lagu" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (jumlahLagu >= MAX_LAGU) {
                cout << "Daftar lagu penuh!\n";
            } else {
                cin.ignore(); // Membersihkan buffer
                cout << "Masukkan judul lagu: ";
                getline(cin, judul[jumlahLagu]);
                cout << "Masukkan nama penyanyi: ";
                getline(cin, penyanyi[jumlahLagu]);
                cout << "Masukkan durasi lagu (menit): ";
                cin >> durasi[jumlahLagu];

                jumlahLagu++;
                cout << "Lagu berhasil ditambahkan!\n";
            }
        } 
        else if (pilihan == 2) {
            if (jumlahLagu == 0) {
                cout << "Daftar lagu masih kosong!\n";
            } else {
                cout << "\n=== DAFTAR LAGU ===\n";
                for (int i = 0; i < jumlahLagu; i++) {
                    cout << i + 1 << ". " << judul[i] << " - " << penyanyi[i] 
                         << " (" << durasi[i] << " menit)" << endl;
                }
            }
        } 
        else if (pilihan == 0) {
            cout << "Keluar dari program. Terima kasih!\n";
        } 
        else {
            cout << "Pilihan tidak valid! Coba lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}