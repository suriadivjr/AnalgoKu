/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 2 - STUDI KASUS 3 - PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

main()
{
    int bil[5] = {14, 31, 59, 72, 98};
    int cari = 72;
    int n = sizeof(bil) / sizeof(bil[0]);
    int idx;

    int i = 1;
    int j = n;
    int mid;
    bool found = false;
    while (!found && i <= j)
    {
        mid = (i + j) / 2;
        if (bil[mid] == cari)
            found = true;
        else if (bil[mid] < cari)
            i = mid + 1;
        else
            j = mid - 1;
    }
    
    if (found == true)
    {
        idx = mid;
        cout << "Found at index " << idx;
    }
    else
    {
        idx = 0;
        cout << "Not Found";
    }

    return 0;
}
