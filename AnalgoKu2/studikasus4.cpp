/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 2 - STUDI KASUS 4 - PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {3, 45, 72, 31, 96};
    int n = sizeof(bil) / sizeof(bil[0]);
    int i, j, insert;

    for (i = 1; i < n; i++)
    {
        insert = bil[i];
        j = i - 1;
        while (j >= 0 && bil[j] > insert)
        {
            bil[j + 1] = bil[j];
            j = j - 1;
        }
        bil[j + 1] = insert;
    }
    
    cout << "Insertion Sort: ";
    for (j = 0; j < n; j++)
    {
        cout << bil[j] << " ";
    }
    return 0;
}
