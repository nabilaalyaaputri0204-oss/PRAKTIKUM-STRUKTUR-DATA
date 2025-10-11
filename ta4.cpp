#include <iostream>
using namespace std;

const int MAX = 10;
string st[MAX];
int top = -1;

bool isEmpty() { return top == -1; }
bool isFull() { return top == MAX - 1; }

void push(string x) {
    if (isFull()) {
        cout << "Stack penuh!\n";
        return;
    }
    st[++top] = x;
    cout << "Push " << x << " berhasil\n";
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
        return;
    }
    cout << "Pop " << st[top--] << " berhasil\n";
}

void display() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
        return;
    }
    cout << "\nIsi Stack:\n";
    for (int i = top; i >= 0; i--)
        cout << i+1 << ". " << st[i] << "\n";
}

void clear() {
    top = -1;
    cout << "Stack dikosongkan!\n";
}

int main() {
    int pilih;
    string data;
    
    do {
        cout << "\n=== RIWAYAT BROWSER ===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Clear\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();
        
        if (pilih == 1) {
            cout << "URL: ";
            getline(cin, data);
            push(data);
        }
        else if (pilih == 2) pop();
        else if (pilih == 3) display();
        else if (pilih == 4) cout << (isEmpty() ? "KOSONG\n" : "TIDAK kosong\n");
        else if (pilih == 5) cout << (isFull() ? "PENUH\n" : "BELUM penuh\n");
        else if (pilih == 6) clear();
        
    } while (pilih != 0);
    
    return 0;
}