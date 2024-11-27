#include <bits/stdc++.h>

using namespace std;

int main()

{
    long double grudu_kiekis = 1;
    long double viso_grudu_kiekis = 0;
    long double grudu_mase_tonomis;
    long double  mase = 20;
    long double  langelis = 1;

    while (langelis <= 64)
    {
        grudu_kiekis *=2;
        viso_grudu_kiekis += grudu_kiekis;
        langelis ++;
    }

    grudu_mase_tonomis = (viso_grudu_kiekis * mase) / 1000000000;

    cout << viso_grudu_kiekis << " " << static_cast<unsigned long long>(grudu_mase_tonomis) << endl;

    return 0;
}



