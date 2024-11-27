#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a, n;

    cin >> a >> n;

    int ats = a;
    for (int i = 1; i < n; i++)
    {
     ats *= a;

    }

    cout << ats << endl;

    return 0;
}



