#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int ats = 1;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if ( n % i == 0)
        {
            ats ++;
        }
    }

    cout << ats <<endl;

    return 0;
}



