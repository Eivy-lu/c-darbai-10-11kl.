#include <bits/stdc++.h>

using namespace std;

int main()

{
    ifstream fd ("U1.txt");
    int n;
    fd >> n;

    ofstream fr ("U1rez.txt");

    long long int pirmas = 0;
    long long int antras = 1;

    if (n == 0)
    {
        fr << 0;
        return 0;
    }
    else if (n == 1)
    {
        fr << 1;
        return 0;
    }

        for (int i = 2; i < n; i++)
        {
            long long int trecias = pirmas + antras;
            pirmas = antras;
            antras = trecias;
        }

    fr << antras;

    return 0;
}



