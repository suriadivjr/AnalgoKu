/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 4 - STUDI KASUS 3 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

void hasil(int *elmn, int jmlhElmn)
{
    for (int i = 0; i < jmlhElmn; i++)
        cout << elmn[i] << " ";
    cout << endl;
}

void insertionSort(int *elmn, int jmlhElmn)
{
    int key, j;
    for (int i = 1; i < jmlhElmn; i++)
    {
        key = elmn[i];
        j = i;
        while (j > 0 && elmn[j - 1] > key)
        {
            elmn[j] = elmn[j - 1];
            j--;
        }
        elmn[j] = key;
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

    insertionSort(elmn, jmlhElmn);
    
    cout << "Hasil: ";
    hasil(elmn, jmlhElmn);
}