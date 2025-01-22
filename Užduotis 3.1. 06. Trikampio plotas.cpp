#include <bits/stdc++.h>

using namespace std;

double Strik(double a);

int main()

{
    double n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double a;
        cin >> a;
        cout << fixed << setprecision(2) << a <<" "<< Strik(a) <<endl;
    }

    return 0;
}

double Strik(double a)
{
    double S = (sqrt(3) / 4) * pow (a, 2);
    return S;
}
