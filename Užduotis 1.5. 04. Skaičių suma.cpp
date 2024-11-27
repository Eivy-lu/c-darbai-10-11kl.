#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a;
    int n;
    int suma = 0;

    cin>> a >> n;

    for(int i = a; i <= n; i++)
    {
        suma += i;
    }

    cout<<suma<<endl;

    return 0;
}



