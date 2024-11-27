#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int eiles_sk = 0;
    cin >> n;

    for (int i = 1; i <= 64; i++)
    {
        if (n >= i)
        {
            n -= i;
            if (i % 8 == 0)
            {
                eiles_sk++;
            }
        }
        else
        {
            break;
        }
    }

    cout << eiles_sk <<" pilnos eilës"<<endl;

    int likusiu_saskiu_sk;

    if (n > 0)
    {
        likusiu_saskiu_sk = n;
        cout <<"Likusiø ğağkiø kiekis:"<< likusiu_saskiu_sk <<endl;
    }
    else cout <<"Likusiø ğağkiø kiekis:"<< 023 <<endl;

    return 0;
}
