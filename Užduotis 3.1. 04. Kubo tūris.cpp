#include <bits/stdc++.h>

using namespace std;

double skaiciavimas (double x);

int main()

{
    double n;

    ifstream sk("duom.txt");
    sk >> n;

    ofstream rez("rez.txt");

    for (int i = 0; i < n; i++)
    {
        double x;
        sk >> x;
        rez << fixed << setprecision(2) << x <<" "<< skaiciavimas(x) <<endl;
    }

    return 0;
}

double skaiciavimas (double x)
{
    double v = x * x * x;
    return v;
}
