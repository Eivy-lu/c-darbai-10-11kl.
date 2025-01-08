#include <bits/stdc++.h>

using namespace std;

int main()

{
    int x, y;

    cin >> x >> y;

    for (int a = x; a <= y; a++)
    {
        for (int b = a; b <= y; b++)
        {
            for (int c = b; c <= y; c++)
            {
                if (a*a + b*b == c*c)
                {
                    cout << a <<" "<< b <<" "<< c << endl;
                }
            }
        }
    }

    return 0;
}



