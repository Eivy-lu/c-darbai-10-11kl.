#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int kvadratu_suma = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n == (j * j) + (i * i))
            {
                kvadratu_suma +=2;
                cout <<"TAIP"<<endl;
                return 0;
            }
            else
            {
                kvadratu_suma = 0;
            }
        }
    }

    if (kvadratu_suma == 0)
    {
        cout <<"NE"<<endl;
    }

    return 0;
}



