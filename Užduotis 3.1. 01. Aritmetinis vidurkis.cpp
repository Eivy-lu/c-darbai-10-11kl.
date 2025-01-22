#include <bits/stdc++.h>

using namespace std;

double skaiciavimas (double a, double b, double c);

int main()

{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(2) << skaiciavimas(a, b, c) <<endl;

    return 0;
}

double skaiciavimas (double a, double b, double c)
{
    double vidurkis;
    vidurkis = (a + b + c) / 3;
    return vidurkis;
}
