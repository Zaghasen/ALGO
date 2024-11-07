#include <iostream>
using namespace std;

void SelectSort(int a[], int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);   // Tukar Posisi
        cout << "   Iterasi Ke-" << i + 1 << " :  ";
        for (int x = 0; x < n; x++) {
            cout << a[x] << "  ";
        }
        cout << "\n\n";
    }
}

int main() {
    int n = 6;
    int a[] = {7, 23, 4, 29, 11, 9};
    
    cout << "Straight Selection Sort\n";
    cout << "\n   Data Sebelum diurutkan :  ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n\nProses Pengurutan Data:\n\n";
    SelectSort(a, n);
    cout << "   Data Setelah Diurutkan : ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    cin.get();
    return 0;
}
