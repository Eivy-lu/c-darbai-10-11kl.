#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, m;
    int ATS;
    int valgytojas;

    cin >> n >> m;

    ATS = n;
    for (int i = 0; i < m; i++)
    {
        cin >> valgytojas;

        if (valgytojas == 1)
        {
            ATS = ATS - 2;
        }
        else if (valgytojas == 2)
        {
            ATS = ATS - 5;
        }
        else if (valgytojas == 3)
        {
            ATS = ATS - 3;
        }
    }
    if (ATS > 0)
    {
        cout << ATS;
    }
    else if (ATS <= 0)
    {
        cout << 0;
    }

    return 0;
}



