#include <iostream>
#include <string>
using namespace std;

int sequentialSearch(string lagu[], int n, string cari) {
    for (int i = 0; i < n; i++) {
        if (lagu[i] == cari) return i; // ketemu
    }
    return -1; // tidak ketemu
}

int main() {
    string lagu[] = {"Exile", "The Prophecy", "Fix You", "Aku Milikmu", "Lover"};
    int n = 5;

    string cari;
    cout << "Daftar Lagu: \n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << lagu[i] << endl;
    }
    cout << "\nMasukkan judul lagu yang ingin dicari: ";
    getline(cin, cari);

    int hasil = sequentialSearch(lagu, n, cari);
    if (hasil != -1)
        cout << "Lagu \"" << cari << "\" ditemukan pada posisi ke-" << hasil+1 << endl;
    else
        cout << "Lagu \"" << cari << "\" tidak ada dalam daftar." << endl;
}
