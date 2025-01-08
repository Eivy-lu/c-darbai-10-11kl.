#include <bits/stdc++.h>

using namespace std;

int main()

{
    int m;
    int n;
    int palindromai;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        int temp = i;
        int atv = 0;

        while (temp > 0)
        {
            int pask = temp % 10;
            atv = atv * 10 + pask;
            temp = temp / 10;
        }

        if (i == atv)
        {
            cout << i <<endl;
        }
    }

    return 0;
}



