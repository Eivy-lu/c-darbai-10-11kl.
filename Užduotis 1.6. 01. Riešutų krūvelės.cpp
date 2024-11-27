#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int kruvele = 0;
    int ats = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            kruvele += n / 2;
            n = n / 2;
        }

        else if ( n % 2 != 0)
        {
            kruvele += 1;
            n --;
        }

        ats++;
    }

    cout << ats <<endl;

    return 0;
}



