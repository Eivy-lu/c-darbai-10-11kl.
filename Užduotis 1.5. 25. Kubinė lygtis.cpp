#include <bits/stdc++.h>

using namespace std;

int main()

{
    int A, B, C, D;
    int lygties_saknis;
    bool pirmas = true;

    cin >> A >> B >> C >> D;

    for (int x = -1000; x <= 1000; x++)
    {

        lygties_saknis = (A * pow(x, 3)) + (B * pow(x, 2)) + (C * x + D);

        if (lygties_saknis == 0)
        {
            if (pirmas == false)
            {
                cout <<"_"<<x;
            }
            else if (pirmas == true)
            {
                cout << x;
                pirmas = false;
            }
        }

    }
    return 0;
}



