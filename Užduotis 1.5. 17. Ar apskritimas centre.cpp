#include <bits/stdc++.h>

using namespace std;

int main()

{
    double n;
    double apskritimu_skaicius = 0;

    cin >> n;

    for (double i = 0; i < n; i++)
    {
        double x;
        double y;
        double d;

        cin >> x >> y >> d;

        double r = d / 2;
        double atstumas = sqrt(x * x + y * y);

        if (atstumas <= r)
        {
            apskritimu_skaicius ++;
        }

    }

    cout << apskritimu_skaicius <<endl;

    return 0;
}



