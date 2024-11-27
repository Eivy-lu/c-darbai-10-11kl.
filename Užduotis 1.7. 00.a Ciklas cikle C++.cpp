#include <bits/stdc++.h>

using namespace std;

int main()
{
    int skaicius = 1;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << setw(4) << skaicius;
            skaicius++;
        }

        cout << endl;
    }
    return 0;
}
