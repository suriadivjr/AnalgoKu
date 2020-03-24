/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 8 MARET 2020
TUGAS 4 - STUDI KASUS 1 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
*/

#include <iostream>
#include <chrono>
using namespace std;

void merge(int *elmn, int low, int high, int mid)
{
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (elmn[i] < elmn[j])
        {
            c[k] = elmn[i];
            k++;
            i++;
        }
        else
        {
            c[k] = elmn[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = elmn[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = elmn[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        elmn[i] = c[i];
    }
}

void merge_sort(int *elmn, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(elmn, low, mid);
        merge_sort(elmn, mid + 1, high);
        merge(elmn, low, high, mid);
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

    auto start = chrono::steady_clock::now();
    merge_sort(elmn, 0, jmlhElmn - 1);
    auto end = chrono::steady_clock::now();

    cout << "Hasil Pengurutan\n";
    for (int i = 0; i < jmlhElmn; i++)
    {
        cout << elmn[i] << " ";
    }
    cout << endl;

    cout << "Waktu Eksekusi dalam nanosekon: "
         << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
         << " ns" << endl;

    cout << "Waktu Eksekusi dalam mikrosekon: "
         << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " µs" << endl;

    cout << "Waktu Eksekusi dalam millisekon: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " ms" << endl;

    cout << "Waktu Eksekusi dalam detik: "
         << chrono::duration_cast<chrono::seconds>(end - start).count()
         << " detik" << endl;
    return 0;
}