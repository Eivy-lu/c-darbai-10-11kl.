#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a;
    int b;
    int a2;
    int b2;

    cin >> a >> b;

    if (a != b)
    {
        if (a > b)
        {
            a2 = a - b;
            cout << a2 <<" "<< b;
        }
        else if (a < b)
        {
            b2 = b - a;
            cout << a <<" "<< b2;
        }

    }

    else if (a == b && a > 0 && b > 0)
    {
        a2 = 0;
        b2 = 0;
        cout << a2 <<" "<< b2;
    }

    else if (a == b)
    {
        if (a < 0 && b > 0)
        {
            a2 = a - a - a;
            cout << a2 <<" "<< b;
        }
        else if (b < 0 && a > 0)
        {
            b2 = b - b - b;
            cout << a <<" "<< b2;
        }
        else if (b < 0 && a < 0)
        {
            b2 = b - b - b;
            a2 = a - a - a;
            cout << a2 <<" "<< b2;
        }

    }

    return 0;
}



