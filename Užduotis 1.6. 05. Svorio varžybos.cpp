#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a, b;
    int po_metu = 0;

    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        po_metu ++;
    }

    cout << po_metu <<endl;

    return 0;
}



