#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void cetakArray(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tukar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);
    
    cout << "Array sebelum diurutkan: " << endl;
    cetakArray(data, n);
    bubbleSort(data, n);
    
    cout << "Array setelah diurutkan dengan Bubble Sort: " << endl;
    cetakArray(data, n);
    
    return 0; 
}

/*
Array sebelum diurutkan: 
64 34 25 12 22 11 90 
Array setelah diurutkan dengan Bubble Sort: 
11 12 22 25 34 64 90
*/