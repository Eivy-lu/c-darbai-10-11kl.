#include <bits/stdc++.h>

using namespace std;

int main()

{
    long long int n;
    int kiekis = 0;

    cin >> n;

        while (n > 0)
    {
        n/= 10;
        kiekis ++;

    }

    cout << kiekis <<endl;

    return 0;
}

