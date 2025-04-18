#include <bits/stdc++.h>

using namespace std;

struct Pirmokas
{
    string vardas;
    vector<int> korteles;
};

void skaitymas(vector<Pirmokas> &pirmokai);
void spausdinimas(vector<Pirmokas> &pirmokai);

int main()
{
    vector<Pirmokas> pirmokai;

    skaitymas(pirmokai);
    spausdinimas(pirmokai);

    return 0;
}

void spausdinimas(vector<Pirmokas> &pirmokai)
{
    ofstream fout("Rezultatai.txt");

    for(int i = 0; i < pirmokai.size(); i++)
    {
        fout << pirmokai[i].vardas;
        for (int j = 1; j < 11; j++)
        {
            fout <<" "<< pirmokai[i].korteles[j];
        }
        fout <<endl;
    }
}

void skaitymas(vector<Pirmokas> &pirmokai)
{
    ifstream fin("Duomenys.txt");

    int n, m;
    fin >> n >> m;

    pirmokai.resize(n);

    for(int i = 0; i < n; i++)
    {
        pirmokai[i].korteles.resize(11);

        fin.ignore(80, '\n');

        char temp[16];
        fin.get(temp, 16);
        pirmokai[i].vardas = temp;

        for (int j = 0; j < m; j++) ///m cards
        {
            int skaicius;
            fin >> skaicius;

            pirmokai[i].korteles[skaicius]++;
        }
    }
}
