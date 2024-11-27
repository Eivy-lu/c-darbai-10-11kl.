#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [15];
    int didziausias = INT_MIN;
    int netinka = 0;
    int pozicija;

    ifstream sk ("U1.txt");
    sk >> n;

    ofstream rez ("U1rez.txt");

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        if (seka [i] > didziausias && seka [i] % 2 == 0)
        {
            didziausias = seka [i];
            pozicija = i + 1;
        }
        else
        {
            netinka ++;
            if (netinka== n)
            {
                rez <<"NE"<<endl;
                return 0;
            }
        }
    }

    rez << pozicija <<endl;

    return 0;
}
