#include <bits/stdc++.h>

using namespace std;

string pirminis(int sk);

int main()

{
    int sk;
    cin >> sk;

    cout << pirminis (sk) <<endl;

    return 0;
}
string pirminis(int sk)
{
    if (sk == 1)
    {
        return "NE";
    }
    for (int i = 2; i < sk; i++)
    {
        else if (sk % i == 0)
        {
            return "NE";
        }
    }
    return "TAIP";
}
