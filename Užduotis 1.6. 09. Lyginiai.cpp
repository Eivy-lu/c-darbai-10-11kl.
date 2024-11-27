#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int lyginiu_skaiciu_sk = 0;

    cin >> n;

    while (n % 10 != 0)
    {
        if  ((n % 10) % 2 == 0)
        {
            lyginiu_skaiciu_sk++;
        }
        n /= 10;
    }

    cout << lyginiu_skaiciu_sk <<endl;

    return 0;
}



