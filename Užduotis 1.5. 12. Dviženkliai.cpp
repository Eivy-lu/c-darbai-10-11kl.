#include <bits/stdc++.h>

using namespace std;

int main()

{
    int A, B;

    cin >> A >> B;

    bool radau = false;

    for (int i = 10; i <= 99; i ++)
    {
        if (i % A == 0 && i % B == 0)
        {
            cout<< i <<endl;
            radau = true;
        }

    }
    if (radau == false)
    {
        cout << "NËRA"<<endl;
    }


    return 0;
}



