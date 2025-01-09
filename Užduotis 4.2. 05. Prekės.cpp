#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<double> &kainos, double &procentai);
double skaiciavimas(vector<double> &kainos, double &procentai);
void spausdinimas(vector<double> &kainos, double &procentai);

int main()
{
    vector<double> kainos;
    double procentai;

    skaitymas(kainos, procentai);
    spausdinimas(kainos, procentai);

    return 0;
}

double skaiciavimas(vector<double> &kainos, double &procentai)
{
    double vidurkis = 0;

    for(auto k : kainos) vidurkis += k;

    vidurkis /= kainos.size();

    for(int i = 0; i < kainos.size(); i++)
    {
        if(kainos[i] < vidurkis)
        {
            kainos[i] *= 1+procentai/100; ///didinti kaina procentais
        }
    }

    vidurkis = 0;

    for(auto k : kainos) vidurkis += k;

    vidurkis /= kainos.size();

    return vidurkis;
}

void spausdinimas(vector<double> &kainos, double &procentai)
{
    ofstream rf("rez.txt");

    rf << fixed << setprecision(2) << skaiciavimas(kainos, procentai);

    rf.close();
}

void skaitymas(vector<double> &kainos, double &procentai)
{
    ifstream df("duom.txt");

    int n; ///kainu kiekis
    df >> n >> procentai;

    kainos.resize(n); ///pakeicia masyvo dydi (sukuria narius)

    for(int i = 0; i < n; i++)
    {
        df >> kainos[i];
    }

    df.close();
}
