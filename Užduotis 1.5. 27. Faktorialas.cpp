#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    long long int faktorialas = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        faktorialas *= i;
    }
    cout << faktorialas <<endl;

    return 0;
}



