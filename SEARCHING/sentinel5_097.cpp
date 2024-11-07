// search_non_sentinel.cpp   (Data tidak terurut non sentinel)
// Data array a[0..9] dan belum terurut, data yang dicari X, found var boolean (True,False)

#include <iostream>
using namespace std;

int main() {
    int a[10] = {10, 2, 9, 4, 8, 6, 1, 3, 7, 5};
    int x;
    bool found = false;

    cout << "Nilai yang dicari = ";
    cin >> x;

    for (int i = 0; i < 10; ++i) {
        if (a[i] == x) {
            found = true;
            cout << x << " ditemukan pada index array ke-" << i << endl;
            break; // Setelah nilai ditemukan, keluar dari loop
        }
    }

    if (!found)
        cout << x << " tidak terdapat pada array tersebut" << endl;

    return 0;
}
