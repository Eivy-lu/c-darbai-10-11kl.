/*Trys sodininkai

Trys draugai, apsigyvenę kaime, nusprendė mokytis sodininkauti.
Kaime buvo didžiulis sodas, kurio kie kviename vienetiniame plotelyje augo po vieną vaismedį.
Kiekvienas iš trijų draugų pasirinko stačiakampį sklypą ir nusprendė pri Hürèti jame esančius medžius.
Susirinkus draugėn paaiškėjo, kad jų pasi rinkti sklypai įsiterpia vienas į kitą, t. y.
kai kuriuos vaismedžius prižiūrės ne vienas, o keletas sodininkų. Parenkite programą, kuri apskaičiuotų,
kiek vaismedžių panorėjo prižiūrėti visi trys draugai.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int ATS;
    int did_x1 = INT_MIN;
    int did_y1 = INT_MIN;
    int min_x2 = INT_MAX;
    int min_y2 = INT_MAX;

    ifstream sk("Duom.txt");

    for (int i = 0; i < 3; i++)
    {
        sk >> x1 >> y1 >> x2 >> y2;

        did_x1 = max(did_x1, x1);
        did_y1 = max(did_y1, y1);
        min_x2 = min(min_x2, x2);
        min_y2 = min(min_y2, y2);
    }

    int aukstis = min_y2 - did_y1;
    int plotis = min_x2 - did_x1;

    if (aukstis > 0 && plotis > 0)
    {
        ATS = (aukstis * plotis);
    }
    else
    {
        ATS = 0;
    }

    ofstream rez("Rez.txt");
    rez << ATS << endl;

    return 0;
}
