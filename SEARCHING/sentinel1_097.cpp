// (Data tidak terurut dan menggunakan sentinel)

#include <iostream>
using namespace std;

int main() {
    int a[11] = {10, 2, 9, 4, 8, 1, 3, 6, 7, 5, 11};
    int x; 
    cout << "Nilai yang dicari: "; 
    cin >> x;

    // Menambahkan sentinel
    a[10] = x;

    int i = 0;
    // Melakukan pencarian dengan sentinel
    while (a[i] != x)
        i++;

    // Jika nilai i masih kurang dari 11, maka nilai ditemukan
    if (i < 11)
        cout << x << " ditemukan pada index array ke-" << i << endl;
    else
        cout << x << " tidak terdapat pada array tersebut" << endl;

    return 0;
}
