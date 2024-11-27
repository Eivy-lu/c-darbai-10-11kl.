#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a, b, c;
    int treniruotes_nr = 1;

    cin >> a >> b >> c;

    while (a <= c)
    {
        a += b;
        treniruotes_nr ++;
    }

    cout << treniruotes_nr;

    return 0;
}



