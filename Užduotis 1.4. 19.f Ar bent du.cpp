#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a, b, c;
    int ats = 0;

    cin >> a >> b >> c;

     if (a % 2 == 0 && a > 0) {
        ats++;
    }

    if (b % 2 == 0 && b > 0) {
        ats++;
    }

    if (c % 2 == 0 && c > 0) {
        ats++;
    }

    if (ats >= 2)
    {
        cout << "Taip" << endl;
    } else
    {
        cout << "Ne" << endl;
    }

    return 0;
}



