#include <bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    int masyvas [11];

    ifstream sk ("U8.txt");

    sk >> N;

    ofstream rez ("rez.txt");

    for (int i = 0; i < N; i++)
    {
        sk >> masyvas [i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (masyvas[i] > masyvas[i + 1] && masyvas [i] > masyvas [i - 1])
        {
            rez << masyvas[i];
            break;
        }
        else
        {
            rez <<"NËRA"<<endl;
        }
    }

    return 0;
}



