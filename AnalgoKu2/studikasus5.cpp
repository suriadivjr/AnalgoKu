/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 2 - STUDI KASUS 5 - PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {42, 12, 57, 289, 48};
    int n = sizeof(bil) / sizeof(bil[0]);

    int i, j, imaks, temp;

    for (i = 2; i < n; i++)
    {
        imaks = 1;
        for (j = 2; j < i; j++)
        {
            if (bil[j] > bil[imaks])
                imaks = j;
        }
        temp = bil[i];
        bil[i] = bil[imaks];
        bil[imaks] = temp;
    }

    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << bil[i] << " ";
    }
    return 0;
}
