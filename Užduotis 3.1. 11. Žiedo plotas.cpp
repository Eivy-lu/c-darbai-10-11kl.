#include <bits/stdc++.h>

using namespace std;

double Sring(double r1,double r2);

int main()

{
    double r1;
    double r2;
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> r1 >> r2;

        cout <<fixed<<setprecision(2)<< r1 <<" "<< r2 <<" "<< Sring (r1, r2)<<endl;
    }


    return 0;
}
double Sring(double r1,double r2)
{
    double pi = 3.14159;

    return pi * (r2 * r2 - r1 * r1);
}


