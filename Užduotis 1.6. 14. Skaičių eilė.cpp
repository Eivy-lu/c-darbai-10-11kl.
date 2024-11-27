#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int i = 1;

    cin >> n;

    if (n == 1)
    {
        cout <<"TAIP"<<endl;
        return 0;
    }
    else if (n == 2)
    {
        cout <<"NE"<<endl;
        return 0;
    }


    while (i + (i + 1) <= n)
    {
        i += i + 1;
        if (i == n)
        {
            cout <<"TAIP"<<endl;
            break;
        }
        else if (i + (i + 1) > n)
        {
            cout <<"NE"<<endl;
            break;
        }
    }

    return 0;
}



