#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    int s1, s2;
    int pirmo_draugo_taskai = 0;
    int antro_draugo_taskai = 0;

    cin >> t;

    while (t != 0)
    {
        cin >> s1 >> s2;
        pirmo_draugo_taskai += s1;
        antro_draugo_taskai += s2;
        if ( pirmo_draugo_taskai >= t && antro_draugo_taskai >= t)
        {
            cout <<"Şaidimas baigësi lygiosiomis"<< endl;
            t = 0;
        }
        else if (pirmo_draugo_taskai>= t && pirmo_draugo_taskai > antro_draugo_taskai)
        {
            cout <<"Şaidimà laimi 1 draugas"<< endl;
            t = 0;
        }
        else if (antro_draugo_taskai >= t && antro_draugo_taskai > pirmo_draugo_taskai)
        {
            cout <<"Şaidimà laimi 2 draugas"<< endl;
            t = 0;
        }
    }
    return 0;
}



