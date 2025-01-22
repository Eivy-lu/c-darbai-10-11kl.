#include <bits/stdc++.h>

using namespace std;

double Vid(double x, double y);

int main()

{
    double N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double x, y;
        cin >> x >> y;

        cout << fixed << setprecision(2) << x <<" "<< y <<" "<< Vid(x, y)<<endl;
    }

    return 0;
}
double Vid(double x, double y)
{
    double vidurkis = (x + y) / 2;
    return vidurkis;
}


