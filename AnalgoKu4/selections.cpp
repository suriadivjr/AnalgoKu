/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 4 - STUDI KASUS 2 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void hasil(int *elmn, int jmlhElmn)
{
    for (int i = 0; i < jmlhElmn; i++)
        cout << elmn[i] << " ";
    cout << endl;
}

void selection_sort(int *elmn, int jmlhElmn)
{
    int i, j, imin;
    for (i = 0; i < jmlhElmn - 1; i++)
    {
        imin = i;
        for (j = i + 1; j < jmlhElmn; j++)
            if (elmn[j] < elmn[imin])
                imin = j;
        swap(elmn[i], elmn[imin]);
    }
}

int main()
{
    int jmlhElmn;
    cout << "Banyak elemen yang akan diurutkan: ";
    cin >> jmlhElmn;

    int elmn[jmlhElmn];
    cout << "Masukkan " << jmlhElmn << " elemen yang akan diurutkan:\n";
    for (int i = 0; i < jmlhElmn; i++)
    {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> elmn[i];
    }
    
    selection_sort(elmn, jmlhElmn);
    
    cout << "Hasil Pengurutan\n";
    hasil(elmn, jmlhElmn);
}