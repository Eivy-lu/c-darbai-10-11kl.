#include <bits/stdc++.h>

using namespace std;

int main()

{
    int zuvu_mase = 0;
    int kiekis = 0;

    int m = 1;

    while (m != 0)
    {
        cin >> m;

        zuvu_mase += m;

        if(m > 100)
        {
            kiekis ++;
        }

    }
    cout << "Žuvų masė: " <<zuvu_mase<<endl;
    cout << "Rimtų žuvų kiekis: " <<kiekis<<endl;

    return 0;
}



