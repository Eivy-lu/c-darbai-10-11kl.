#include <bits/stdc++.h>

using namespace std;

int main()

{
    int p, k, s;
    int ats = 0;

    cin >> p >> k >> s;

    while (s >= p) {
        ats++;
        s -= p;
        p += k;
    }

    cout << "Pirkëjo nupirktø prekiø kiekis: " <<ats<<endl;

    return 0;
}



