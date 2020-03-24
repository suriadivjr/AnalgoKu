/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 4 - STUDI KASUS 4 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
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

void bubble_sort(int *elmn, int jmlhElmn)
{
    for (int i = 0; i < jmlhElmn; i++)
    {
        int swaps = 0;
        for (int j = 0; j < jmlhElmn - i - 1; j++)
        {
            if (elmn[j] > elmn[j + 1])
            {
                swap(elmn[j], elmn[j + 1]);
                swaps = 1;
            }
        }
        if (!swaps)
            break;
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
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> elmn[i];
    }

    bubble_sort(elmn, jmlhElmn);

    cout << "Hasil: ";
    hasil(elmn, jmlhElmn);
}