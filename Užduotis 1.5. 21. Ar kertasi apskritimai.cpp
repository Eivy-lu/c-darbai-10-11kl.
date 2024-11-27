#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int apskritimu_skaicius = 0;
    int x0 = 6;
    int y0 = 6;
    int r0 = 6;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;

        int r = d / 2;
        int atstumas = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

        if (atstumas <= r0 + r && atstumas  >= abs(r0 - r))
        {
            apskritimu_skaicius ++;
        }
    }

    cout << apskritimu_skaicius <<endl;

    return 0;
}



