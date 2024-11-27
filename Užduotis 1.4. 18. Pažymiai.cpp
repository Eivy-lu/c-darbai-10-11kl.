#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, d, e;
    double x;

    cin >> a >> b >> c >> d >> e;

    x = (a + b + c + d + e) / 5;

    if (x > 9)
    {
        cout <<"Rezultatas: 3" << endl;
    }

    else if (x >= 7)
    {
        cout << "Rezultatas: 2" << endl;
    }

    else
    {
        cout << "Rezultatas: 1" << endl;
    }

    return 0;
}


