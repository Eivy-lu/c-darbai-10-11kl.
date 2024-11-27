#include <bits/stdc++.h>

using namespace std;

int main()

{
    int dvejeto_kvadratas = 1;
    int a;

    cin >> a;

    while (dvejeto_kvadratas * 2 <= a)
    {
        dvejeto_kvadratas *= 2;
    }

    cout << dvejeto_kvadratas <<endl;

    return 0;
}



