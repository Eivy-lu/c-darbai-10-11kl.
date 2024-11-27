#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, k;
    int ats = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        int sk = 1;
        for (int j = 1; j <=k; j++)
        {
            sk *= i;
        }
        ats += sk;
    }

    cout << ats <<endl;

    return 0;
}



