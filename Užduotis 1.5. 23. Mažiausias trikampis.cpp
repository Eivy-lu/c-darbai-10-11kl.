#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int x1, y1;
    int x2, y2;
    int x3, y3;
    double trikampiu_plotu_suma = 0;
    bool trikampis_egzistuoja = false;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double atstumas_1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double atstumas_2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double atstumas_3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

        if (atstumas_1 + atstumas_2 > atstumas_3 && atstumas_2 + atstumas_3 > atstumas_1 && atstumas_1 + atstumas_3 > atstumas_2)

        {

            double pusperimetris = (atstumas_1 + atstumas_2 + atstumas_3) / 2.0;
            double plotas = sqrt(pusperimetris * (pusperimetris - atstumas_1) * (pusperimetris - atstumas_2) * (pusperimetris - atstumas_3));

            if (plotas > 0)
            {
                trikampiu_plotu_suma += plotas;
                trikampis_egzistuoja = true;
            }
        }
    }

    if(trikampis_egzistuoja)
    {
        cout << "suma = " << fixed << setprecision (3) << trikampiu_plotu_suma <<endl;
    }
    else cout <<"NO"<<endl;

    return 0;
}

