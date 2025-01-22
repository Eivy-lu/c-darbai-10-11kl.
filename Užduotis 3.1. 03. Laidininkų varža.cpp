#include <bits/stdc++.h>

using namespace std;

double varza (double r1, double r2);

int main()

{
    int r1;
    int r2;
    int R;

    cin >> r1 >> r2;

    cout << fixed << setprecision(2) << varza(r1, r2) <<endl;

    return 0;
}

double varza (double r1, double r2)
{
    double R;
    R = (r1 * r2) / (r1 + r2);
    return R;
}
