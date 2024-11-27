#include <bits/stdc++.h>

using namespace std;

int main()

{
    int x = 1;
    int a;

    cin >> a;

    while (pow(x, 2) <= a)
    {
        x++;
    }

    cout << x <<endl;

    return 0;
}



