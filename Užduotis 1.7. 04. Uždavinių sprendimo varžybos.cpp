#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int d;
    int uzdaviniu_sk;
    int kiekvienas_mokinys;
    int is_viso_uzdaviniu;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       cin >> d;
       for (int j = 1; j <= d; j++)
       {
           cin >> uzdaviniu_sk;
           kiekvienas_mokinys += uzdaviniu_sk;
       }
        cout << kiekvienas_mokinys <<endl;

        is_viso_uzdaviniu += kiekvienas_mokinys;
    }

    cout << is_viso_uzdaviniu <<endl;

    return 0;
}



