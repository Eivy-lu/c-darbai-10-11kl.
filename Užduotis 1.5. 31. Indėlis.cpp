#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int a;
    int p;
    double suma;

    cin >> n >> a >> p;

    suma = a;

    for (int i = 0; i < n; i++)
    {
        suma += suma * p / 100.0;
    }

    double palukanos = suma - a;

    int eurai = palukanos;
    int centai = (palukanos - eurai) * 100 + 0.5;

    cout << eurai << " Eur " << centai << " ct" << endl;

    return 0;
}



