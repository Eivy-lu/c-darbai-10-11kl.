#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 == 0)
        {
            cout <<"**"<<endl;
        }
        else if ( i % 2 != 0)
        {
            cout <<"*0"<<endl;
        }
    }
  return 0;
}



