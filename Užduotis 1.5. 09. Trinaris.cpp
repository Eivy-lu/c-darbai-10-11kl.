#include <bits/stdc++.h>

using namespace std;

int main()

{
    int A, B, C;

    cin >> A >> B >> C;

    for (int i = -3; i<= 3; i++)
    {
        int x = i;
        int y = A * pow(x, 2) + B * x + C;
        cout <<"Kai x=" << i <<", tai y=" << y <<endl;
    }

    return 0;
}



