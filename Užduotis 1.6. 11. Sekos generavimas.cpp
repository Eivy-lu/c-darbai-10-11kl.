#include <bits/stdc++.h>

using namespace std;

int main()

{
    int x;
    int sk;

    cin >> x;

    cout << x ;

    sk = x;
    while (sk != 1)
    {
        if (sk % 2 == 0)
        {
            sk /=2;
            cout <<","<< sk ;
        }
        else if (sk % 2 != 0)
        {
            sk = (sk * 3) + 1;
            cout <<","<< sk ;
        }
    }
    return 0;
}



