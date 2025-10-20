#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis);
void sprendimas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis);
void spausdinimas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis);

int main()
{
    vector<int> Rasos_Kolekcija;
    vector<int> Rimo_Kolekcija;
    int rasos_kiekis;
    int rimo_kiekis;

    skaitymas(Rasos_Kolekcija, Rimo_Kolekcija, rasos_kiekis, rimo_kiekis);
    sprendimas(Rasos_Kolekcija, Rimo_Kolekcija, rasos_kiekis, rimo_kiekis);
    spausdinimas(Rasos_Kolekcija, Rimo_Kolekcija, rasos_kiekis, rimo_kiekis);

    return 0;
}
void spausdinimas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis)
{
    ofstream rez("Rez.txt");
    rez <<"Rasos kolekcija:" <<endl;
    for(int i = 0; i < rasos_kiekis; i++)
    {
        rez <<Rasos_Kolekcija[i]<<endl;
    }
    rez <<"Rimo kolekcija:" <<endl;
    for(int i = 0; i < rimo_kiekis; i++)
    {
        rez <<Rimo_Kolekcija[i]<<endl;
    }
}

void sprendimas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis)
{
    for (int i = 0; i < Rasos_Kolekcija.size(); ++i)
    {
        if (Rasos_Kolekcija[i] >= 100 && Rasos_Kolekcija[i] <= 999)
        {
            Rimo_Kolekcija.push_back(Rasos_Kolekcija[i]);
            Rasos_Kolekcija.erase(Rasos_Kolekcija.begin() + i);
            --i;
        }
    }

    for (int i = 0; i < Rimo_Kolekcija.size(); ++i)
    {
        if (Rimo_Kolekcija[i] >= 10 && Rimo_Kolekcija[i] <= 99)
        {
            Rasos_Kolekcija.push_back(Rimo_Kolekcija[i]);
            Rimo_Kolekcija.erase(Rimo_Kolekcija.begin() + i);
            --i;
        }
    }

    rasos_kiekis = Rasos_Kolekcija.size();
    rimo_kiekis = Rimo_Kolekcija.size();
}

void skaitymas(vector<int> &Rasos_Kolekcija, vector<int> &Rimo_Kolekcija, int &rasos_kiekis, int &rimo_kiekis)
{
    ifstream sk("Duom.txt");

    sk >> rasos_kiekis;
    for(int i = 0; i < rasos_kiekis; i++)
    {
        int temp;
        sk >> temp;
        Rasos_Kolekcija.push_back(temp);
    }

    sk >> rimo_kiekis;
    for(int i = 0; i < rimo_kiekis; i++)
    {
        int temp;
        sk >> temp;
        Rimo_Kolekcija.push_back(temp);
    }
}
