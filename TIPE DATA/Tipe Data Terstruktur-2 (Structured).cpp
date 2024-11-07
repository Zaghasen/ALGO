// Records.cpp : Contoh Record

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    struct struknilai {
        char nomhs[9];
        char nama[16];
        float nilai; 
    } nilaimhs;
 
    strcpy(nilaimhs.nomhs, "12314015");
    strcpy(nilaimhs.nama, "Radian Clara");
    nilaimhs.nilai = 80.5;

    cout << "Nama  : " << nilaimhs.nama << endl;
    cout << "Nomhs : " << nilaimhs.nomhs << endl;
    cout << "Nilai : " << nilaimhs.nilai << endl;

    getchar();
    return 0;
}
