#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int skaiciai;
    int did = 0;
    int maz = 0;

    ifstream sk("U6.txt");

    sk >> N;

    int buves;
    sk >> buves;

    for (int i = 1; i < N; i++)
    {
        sk >> skaiciai;

        if (skaiciai < buves)
        {
            maz ++;
        }
        if (skaiciai > buves)
        {
            did ++;
        }

        buves = skaiciai;
    }

    if (did == N -1)
    {
        cout << "Didėjančioji" << endl;
    }

    else if (maz == N -1)
    {
        cout << "Mažėjančioji" << endl;
    }

      else
    {
        cout << "Nei tokia, nei anokia" << endl;
    }


    return 0;
}
