#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

struct pirmokai
{
    string vardas;
    int korteles;
};

skaitymas(vector<pirmokai> &mokiniai);
sprendimas(vector<pirmokai> &mokiniai);
spausdinimas(vector<pirmokai> &mokiniai);

int main()
{
    vector<pirmokai> mokiniai(15);


    skaitymas(mokiniai);
    sprendimas(mokiniai);
    spausdinimas(mokiniai);

    return 0;
}

sprendimas(vector<pirmokai> &mokiniai)
{
    int eiles_nr = 0;
    for(int i = 0; i < mokiniai.size(); i++)
    {
        for(int j = i+1; j < mokiniai.size(); j++)
        {
            if(mokiniai[j] = eiles_nr)
            {
                mokiniai[i]++;
            }

        }
    }
}

skaitymas(vector<pirmokai> &mokiniai)
{
    ifstream sk("Duomenys.txt");

    int n;
    int k;

    sk >> n >> k;

    mokiniai.resize(n);

    for(int i = 0; i < n; i++)
    {
        sk >> mokiniai[i].vardas;
        for(int j = 0; i < k; j++)
        {
            int sk;
            sk >> sk;
            sk >> mokiniai[i].korteles[sk];
        }
    }
}
