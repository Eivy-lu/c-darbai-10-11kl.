#include <bits/stdc++.h>

using namespace std;

string menuo (int sk);

int main()

{
    int sk;

    cin >> sk;

    cout << menuo(sk) <<endl;

    return 0;
}

string menuo (int sk)
{
    if (sk == 1)
    {
        return "Sausis";
    }
    if (sk == 2)
    {
        return "Vasaris";
    }
    if (sk == 3)
    {
        return "Kovas";
    }
    if (sk == 4)
    {
        return "Balandis";
    }
    if (sk == 5)
    {
        return "Geguþë";
    }
    if (sk == 6)
    {
        return "Birþelis";
    }
    if (sk == 7)
    {
        return "Liepa";
    }
    if (sk == 8)
    {
        return "Rugpjûtis";
    }
    if (sk == 9)
    {
        return "Rugsëjis";
    }
    if (sk == 10)
    {
        return "Spalis";
    }
    if (sk == 11)
    {
        return "Lapkritis";
    }
    if (sk == 12)
    {
        return "Gruodis";
    }

}
