#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t0;
    int n;
    int t;

    cin >> t0 >> n;

    int paskutine_temperatura = t0;

    for (int i = 1; i <= n; i++)
    {
       cin >> t;
    paskutine_temperatura = paskutine_temperatura + t;
    }

    cout << paskutine_temperatura << endl;

    return 0;
}



