#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;

    if(n == 0 || n == 1)
    {
        cout <<"NE"<<endl;
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        int tikrinimas = n % i;

        if (tikrinimas == 0)
        {
            cout <<"NE"<<endl;
            return 0;
        }
    }
    cout <<"TAIP"<<endl;

    return 0;
}



