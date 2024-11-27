#include <bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    int eiles_nr = 0;
    int maziausia_teigiama = INT_MAX;

    cin>> N;

    for (int i = 1; i <= N; i++)
    {
        int naturalus_sk;
        cin>> naturalus_sk;

        if (naturalus_sk >=0 && naturalus_sk < maziausia_teigiama)
        {
            maziausia_teigiama = naturalus_sk;
            eiles_nr = i;
        }

    }
    if (eiles_nr == 0)
    {
        cout << "0 0" << endl;
    }
    else
    {
        cout << maziausia_teigiama << " " << eiles_nr << endl;

        return 0;
    }
}


