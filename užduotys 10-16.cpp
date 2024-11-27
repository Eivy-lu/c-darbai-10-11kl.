#include <bits/stdc++.h>

using namespace std;

int main()

{
    double s1, s2, s3;
    double n;

    cin >> n >> s1 >> s2 >> s3;

    if ((s1 <= n) || (s2 <= n) || (s3 <= n))
    {
        cout <<"TAIP"<<endl;
    }

    else
    {
        cout <<"NE"<<endl;
    }
    return 0;
}



