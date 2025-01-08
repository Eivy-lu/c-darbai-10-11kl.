#include <bits/stdc++.h>

using namespace std;

int main()

{
    long long int ats = 0;
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        long long int daugyba = 1;
        for (int j = i; j <= i * 2; j++)
        {
            daugyba *= j;
        }
        ats += daugyba;
    }

    cout << ats <<endl;

    return 0;
}



