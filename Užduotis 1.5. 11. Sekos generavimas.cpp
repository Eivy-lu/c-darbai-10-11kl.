#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int i;

    cin >> n;

    for(int i = 1; i <= n; i+=2)
    {
        if(i == 1)
        {
            cout << i ;
        }
        else cout << ","<< i ;
    }
    for(int i = 2; i <= n; i+=2)
    {
        cout << ","<< i ;
    }

    return 0;
}



