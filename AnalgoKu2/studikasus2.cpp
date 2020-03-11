/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 2 - STUDI KASUS 2 - PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {15, 387, 22, 63, 74};
    int cari = 63;
    int n = sizeof(bil) / sizeof(bil[0]);

    int idx;
    int i = 1;
    bool found = false;

    while (i <= n && !found)
    {
        if (bil[i] == cari)
            found = true;
        else
            i = i + 1;
    }

    if (found == true)
    {
        idx = i;
        cout << "Found at index " << idx;
    }

    else
    {
        idx = 0;
        cout << "Not Found";
    }

    return 0;
}