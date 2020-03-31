/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 30 MARET 2020
STUDI KASUS 7 - PRAKTIKUM DESAIN DAN ANALISIS ALGORITMA
*/

#include <bits/stdc++.h>
using namespace std;
int countWays(int n, int m)
{
    int count[n + 1];
    count[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
        else if (i < m)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[n];
}

int main()
{
    int n,m;
    cout << "Masukkan Panjang Kotak\t\t: "; cin >> n;
    cout << "Masukkan Lebar Kotak\t\t: "; cin >> m;
    cout << "Banyak Cara yang dibutuhkan\t: " << countWays(n, m);
    return 0;
}