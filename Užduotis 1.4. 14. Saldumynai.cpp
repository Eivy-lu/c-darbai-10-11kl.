#include <bits/stdc++.h>

using namespace std;

int main()

{
    double m1, s1, m2, s2;
    double kaina_riesutu;
    double kaina_karameliniu;

    cin >> m1 >> s1 >> m2 >> s2;

    kaina_riesutu = s1 / m1;
    kaina_karameliniu = s2 / m2;

    if ( kaina_riesutu == kaina_karameliniu)
    {
        cout << "Abiejø kainos vienodos" << endl;
    }
    else if ( kaina_riesutu > kaina_karameliniu)
    {
        cout << "Rieğutiniai brangesni" << endl;
    }

    else if ( kaina_riesutu < kaina_karameliniu)
    {
        cout << "Karameliniai brangesni" << endl;
    }

    return 0;
}



