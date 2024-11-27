#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int ats = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int a = 1; a = n; a+=2)
        {
            ats = ats + i * a;
        }
    }
    cout << ats;

    return 0;
}



