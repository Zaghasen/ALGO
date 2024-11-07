// (Data terurut, pencarian secara binary)

#include <iostream>
using namespace std;

int main() {
    int a[10] = {2, 4, 7, 10, 13, 17, 21, 25, 28};
    int x;
    bool found = false;

    cout << "Nilai yang dicari: ";
    cin >> x;

    int i = 0; // index awal
    int j = 9; // index akhir

    // Melakukan pencarian biner
    while (i <= j) {
        int t = (i + j) / 2; // index tengah
        if (a[t] == x) {
            found = true; // Data ditemukan
            break;
        } else if (x < a[t]) {
            j = t - 1; // index akhir = index tengah - 1
        } else {
            i = t + 1; // index awal = index tengah + 1
        }
    }

    // Jika nilai ditemukan, cetak indeksnya
    if (found)
        cout << x << " ditemukan pada index array ke-" << i << endl;
    else
        cout << x << " tidak terdapat pada array tersebut" << endl;

    return 0;
}
