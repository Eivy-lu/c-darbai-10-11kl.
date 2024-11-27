#include <bits/stdc++.h>

using namespace std;

int main()

{
    int pirmas;
    int antras;
    int riba;
    int trecias;
    int kiekis = 3;

    cin >> pirmas >> antras >> riba;

    if (pirmas + antras >= riba)
    {
        cout << 2 <<endl;
    }

    while (antras + pirmas <= riba)
    {
        trecias = pirmas + antras;
        pirmas = antras;
        antras = trecias;
        kiekis ++;
    }

    cout << kiekis <<endl;
    return 0;
}



