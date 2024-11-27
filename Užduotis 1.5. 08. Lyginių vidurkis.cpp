#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int sk = 0;
    int ats = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 == 0)
        {
            ats += i;
            sk++;
        }
    }

    double vidurkis = ats / sk;

    if (sk != 0)
    {
        cout << round(vidurkis) <<endl;
    }
    else cout <<"NO"<<endl;

    return 0;
}



