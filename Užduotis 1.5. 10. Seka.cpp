#include <bits/stdc++.h>

using namespace std;

int main()

{
    int k;

    cin >> k;

    int a1 = 1;
    int a2 = -2;
    int an;

    if (k == 1)
    {
        cout << a1 << endl;
        return 0;
    }
    if (k == 2)
    {
        cout << a2 << endl;
        return 0;
    }

    for (int i = 3; i <= k; i++)
    {
        an = a1 + a2;
        a1 = a2;
        a2 = an;
    }

    cout << an << endl;
    return 0;
}
