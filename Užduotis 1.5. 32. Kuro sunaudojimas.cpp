#include <bits/stdc++.h>

using namespace std;

int main()

{
    double n;
    double l;
    double a;
    double taupiausias_automobilis = DBL_MAX;
    double ats;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> a;
        double automobilio_degalu_naudojimas = a / l;
        if (automobilio_degalu_naudojimas < taupiausias_automobilis)
        {
            taupiausias_automobilis = automobilio_degalu_naudojimas;
            ats = i;
        }
    }

    cout << ats <<" automobilis taupiausias" <<endl;

    return 0;
}



