#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int suma = 0;
        for (int j = 0; j < k; j++)
        {
            int metimas;
            cin >> metimas;
            suma += metimas;
        }

        cout << suma << endl;
    }
    return 0;
}
