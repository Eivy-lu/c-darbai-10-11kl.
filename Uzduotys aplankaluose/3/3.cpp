#include <bits/stdc++.h>
using namespace std;

void skaiciavimas(double &plotas, double &perimetras);

int main()
{
    double plotas = 1;
    double perimetras;

    skaiciavimas(plotas, perimetras);

    ofstream rez("rez.txt");
    rez << fixed << setprecision(4) << plotas <<";  "<< fixed << setprecision(1)<< perimetras <<endl;

    return 0;
}
void skaiciavimas(double &plotas, double &perimetras)
{
    ifstream sk("duom.txt");

    double a;
    double b;
    double c;
    double pusper;

    sk >> a >> b >> c;

    perimetras = a + b + c;
    pusper = (a + b + c) / 2;
    plotas = sqrt(pusper * (pusper - a) * (pusper - b) * (pusper - c));
}
