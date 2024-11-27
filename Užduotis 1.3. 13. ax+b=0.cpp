#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{
    double a;
    double pi = 3.14;
    double S1;
    double S2;
    double S;

    cin >> a;

    double b = a / 2;
    S1 = pi * b * b;
    S2 = a * a;
    S = S2 - S1;

    cout <<"Uþbrûkðniuotos figûros plotas " << fixed << setprecision (2)<< S <<" kv. cm."<< endl;

    return 0;
}



