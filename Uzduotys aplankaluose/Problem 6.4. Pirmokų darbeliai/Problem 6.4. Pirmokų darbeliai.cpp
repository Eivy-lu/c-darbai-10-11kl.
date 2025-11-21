#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

struct pirmokai
{
    string vardas;
    int korteles[11]
};

skaitymas(vector<pirmokai> &mokiniai);
spausdinimas(vector<pirmokai> &mokiniai);

int main()
{
    vector<pirmokai> mokiniai(15);

    skaitymas(mokiniai);
    spausdinimas(mokiniai);

    return 0;
}

spausdinimas(vector<pirmokai> &mokiniai)
{
    ofstream rez("Rezultatas.txt");
        for(int i = 0; i < mokiniai.size(); i++)
    {
        rez << mokiniai[i].vardas <<endl;
        for(int j = 1; i < 11; j++)
        {
            rez " "<< mokiniai[i].korteles[j];
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
            sk >> mokiniai[i].korteles[sk]++;

        }
    }
}
