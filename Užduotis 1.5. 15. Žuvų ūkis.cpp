#include <bits/stdc++.h>

using namespace std;

int main()

{
    int m;
    int n;
    long long int ATS;

    cin >> m >> n;

    ATS = m;
    for (int i = 1; i <= n; i++)
    {
        ATS = ATS + (m * m);
    }

    cout << ATS <<endl;

    return 0;
}



