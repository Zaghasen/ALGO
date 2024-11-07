#include <iostream>
using namespace std;

int main() {
    int i, j, n = 6, temp, x[6] = {7, 23, 4, 29, 11, 9};

    cout << "Data Sebelum diurutkan:\n";
    for (i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    for (i = 1; i < n; i++) {
        temp = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > temp) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = temp;
    }

    cout << "\n\nData Setelah diurutkan:\n";
    for (i = 0; i < n; i++) {
        cout << x[i] << " ";
    }

    cout << "\n\n";
    cin.get(); // Menunggu input dari pengguna sebelum program berakhir
    return 0;
}
