#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;

    cin >> n;

    cout << "{" << -10 ;
    for (int i = -9; i <= n; i++)
    {
        cout <<", "<< i ;
    }
    cout <<"}"<<endl;

    return 0;
}



