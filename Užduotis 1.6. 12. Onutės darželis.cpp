#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int geliu_sk = 1;

    cin >> n;

    while (n - 1 != 0)
    {
        geliu_sk += 3;
        n --;
    }

    cout << geliu_sk <<endl;

    return 0;
}

