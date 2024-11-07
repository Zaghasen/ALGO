// (Data tidak terurut tanpa menggunakan sentinel)

#include <iostream>
using namespace std;

int main() {
    int a[10] = {2, 4, 7, 9, 11, 14, 17, 20, 25, 30};
    int x;
    bool found = false;

    cout << "Nilai yang dicari: ";
    cin >> x;

    int i = 0;
    while (i < 10 && a[i] <= x) {
        if (a[i] == x) {
            found = true;
            break; // Jika nilai ditemukan, keluar dari loop
        }
        i++;
    }

    if (found)
        cout << x << " ditemukan pada index array ke-" << i << endl;
    else
        cout << x << " tidak terdapat pada array tersebut" << endl;

    return 0;
}
