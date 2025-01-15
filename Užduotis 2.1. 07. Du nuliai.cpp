#include <bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    int skaiciai;
    int nuliai = 0;

    ifstream sk ("U7.txt");
    sk >> N;

    for (int i = 0; i < N; i++)
    {
        sk >> skaiciai;

        if (skaiciai == 0)
        {
            nuliai ++;
        }
    }

    if (nuliai >= 2)
    {
        cout <<"TAIP"<<endl;
    }
    else if (nuliai < 2)
    {
        cout <<"NE"<<endl;
    }

    return 0;
}



