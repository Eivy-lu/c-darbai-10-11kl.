#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n, m;
    int suma = 0;
    int sandauga = 1;

    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {

        if ( i % 2 == 0)
        {
            suma = suma + i;
        }
        else if ( i % 2 != 0)
        {
            sandauga = sandauga * i;
        }
    }
    cout << "Suma " << suma <<endl;
    cout << "Sandauga " << sandauga <<endl;

    return 0;
}



