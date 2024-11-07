// // (Data tidak terurut dan menggunakan sentinel)

#include <iostream>
using namespace std;

int main() {
    int a[10] = {2, 4, 7, 10, 13, 17, 21, 25, 28};
    int x;
    bool found = false;

    cout << "Nilai yang dicari: ";
    cin >> x;

    // Menambahkan sentinel
    a[9] = x;

    int i = 0;
    // Melakukan pencarian dengan sentinel
    while (a[i] != x)
        i++;

    // Jika nilai i masih kurang dari 9, maka nilai ditemukan
    if (i < 9)
        found = true;

    // Jika nilai ditemukan, cetak indeksnya
    if (found)
        cout << x << " ditemukan pada index array ke-" << i << endl;
    else
        cout << x << " tidak terdapat pada array tersebut" << endl;

    return 0;
}
