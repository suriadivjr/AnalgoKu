/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 2 - STUDI KASUS 1 - PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {1632, 3, 230, 23, 28};
    int n = sizeof(bil)/sizeof(bil[0]);
    int max = bil[0];
    int i = 2;

    while (i <= n)
    {
        if (bil[i] > max)
            max = bil[i];
        i = i + 1;
    }
    cout << "Max = " << max;

    return 0;
}
