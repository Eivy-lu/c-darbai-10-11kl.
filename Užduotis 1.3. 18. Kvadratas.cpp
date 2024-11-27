#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{
    double a, r;
    double S, S1, S2;
    double pi = 3.14;

    cin >> a >> r;

    S1 = a * a;
    S2 = pi * r * r;
    S = S2 - S1;

    cout <<"Uþbrûkðniuotos figûros plotas " << fixed << setprecision (2)<< S <<" cm."<< endl;

    return 0;
}



