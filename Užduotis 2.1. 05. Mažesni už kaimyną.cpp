#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int masyvas[11];

    ifstream sk("U8.txt");

    sk >> N;

    for (int i = 0; i < N; i++)
    {
        sk >> masyvas[i];
    }

    int rasta = 0;

    for (int i = 1; i < N; i++)
    {
        if (masyvas[i] < masyvas[i - 1])
        {
            rasta ++;
            break;
        }
    }

    if (rasta == 0)
    {
        cout << "NËRA" << endl;
        break;
    }

    cout << rasta << endl;

    return 0;
}
