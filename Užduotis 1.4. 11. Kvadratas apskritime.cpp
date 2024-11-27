#include <bits/stdc++.h>

using namespace std;

int main()

{
    int a, d;
    int kvadrato_izambine;

    cin  >> a >> d;

    kvadrato_izambine = (a * a) + (a * a);

    if (kvadrato_izambine <= d * d)
    {
        cout <<"Telpa"<<endl;
    }
    if (kvadrato_izambine > d * d)
    {
        cout <<"Netelpa"<<endl;
    }

    return 0;
}

