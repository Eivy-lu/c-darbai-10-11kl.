#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a;
    int b;

    cin >> a >> b;

    cout <<"Skaičius | Dalijasi iš:"<<endl;

    for (int i = a; i <= b; i++)
    {
        int dalikliai = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                dalikliai++;
            }
        }
        cout <<setw(5) << i << setw(12) << dalikliai <<endl;
    }

    return 0;
}



