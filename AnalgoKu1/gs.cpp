/*
NAMA    : SURIADI VAJRAKARNA
NPM     : 140810180038
KELAS   : B
TANGGAL : 3 MARET 2020
TUGAS 1 PRAKTIKUM ANALISIS ALGORITMA
*/

#include <iostream>
using namespace std;

bool prefComparison(int pref[10][5], int w, int m, int m1)
{
    for (int i = 0; i < 5; i++)
    {
        if (pref[w][i] == m1)
            return true;

        if (pref[w][i] == m)
            return false;
    }

    return false;
}

void stableMatching(int pref[10][5], string people[5])
{
    int womanPair[5];
    bool manSingle[5];
    int manSingleCount = 5;

    for (int i = 0; i < 5; i++)
    {
        womanPair[i] = -1;
        manSingle[i] = false;
    }

    while (manSingleCount > 0)
    {
        int m;

        for (m = 0; m < 5; m++)
            if (manSingle[m] == false)
                break;

        for (int i = 0; i < 5 && manSingle[m] == false; i++)
        {
            int w = pref[m][i];

            if (womanPair[w - 5] == -1)
            {
                womanPair[w - 5] = m;
                manSingle[m] = true;
                manSingleCount--;
            }

            else
            {
                int m1 = womanPair[w - 5];

                if (prefComparison(pref, w, m, m1) == false)
                {
                    womanPair[w - 5] = m;
                    manSingle[m] = true;
                    manSingle[m1] = false;
                }
            }
        }
    }

    cout << "Stable Matches are\n";

    for (int i = 0; i < 5; i++)
    {
        cout << people[i + 5] << "\t and \t" << people[womanPair[i]] << endl;
    }
}

int main()
{
    string people[10] = {"Victor", "Wyatt", "Xavier", "Yancey", "Zeus", "Amy", "Bertha", "Clare", "Diane", "Erika"};
    int pref[10][5] = {{6, 5, 8, 9, 7},
                            {8, 6, 5, 7, 9},
                            {6, 9, 7, 8, 5},
                            {5, 8, 7, 6, 9},
                            {6, 8, 5, 9, 7},
                            {4, 0, 1, 3, 2},
                            {2, 1, 3, 0, 4},
                            {1, 2, 3, 4, 0},
                            {0, 4, 3, 2, 1},
                            {3, 1, 4, 2, 0}};

    stableMatching(pref, people);
}