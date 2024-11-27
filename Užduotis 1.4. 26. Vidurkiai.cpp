#include <bits/stdc++.h>

using namespace std;

int main()

{
    double aritmetinis_vidurkis;
    double geometrinis_vidurkis;
    double a, b;

    cin >> a >> b;

    if ( a < 0 && b > 0)
    {
        cout <<"Neteisingi pradiniai duomenys"<< endl;
        return 0;
    }
        if ( a > 0 && b < 0)
    {
        cout <<"Neteisingi pradiniai duomenys"<< endl;
        return 0;
    }

    aritmetinis_vidurkis = (a + b) / 2;
    geometrinis_vidurkis = sqrt ( a * b);

    cout <<"Aritmetinis vidurkis "<< fixed << setprecision (2) << aritmetinis_vidurkis << endl;
    cout <<"Geometrinis vidurkis "<< fixed << setprecision (2) << geometrinis_vidurkis  << endl;

    return 0;
}



