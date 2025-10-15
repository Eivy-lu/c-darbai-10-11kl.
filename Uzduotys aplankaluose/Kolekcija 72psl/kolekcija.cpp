#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void skaitymas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija);
void sprendimas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija, vector<int> &Pasikartoja, vector<int> &Pasiulymai);
void spausdinimas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija, vector<int> &Pasikartoja, vector<int> &Pasiulymai);

int main()
{
    int Ausra_Turi;
    int Ruta_Turi;
    vector<int> Ausros_Kolekcija;
    vector<int> Rutos_Kolekcija;
    vector<int> Pasikartoja;
    vector<int> Pasiulymai;

    skaitymas(Ausra_Turi, Ruta_Turi, Ausros_Kolekcija, Rutos_Kolekcija);
    sprendimas(Ausra_Turi, Ruta_Turi, Ausros_Kolekcija, Rutos_Kolekcija, Pasikartoja, Pasiulymai);
    spausdinimas(Ausra_Turi, Ruta_Turi, Ausros_Kolekcija, Rutos_Kolekcija, Pasikartoja, Pasiulymai);

    return 0;
}

void skaitymas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija)
{
    ifstream sk("Duom.txt");

    sk >> Ausra_Turi;
    for (int i = 0; i < Ausra_Turi; i++)
    {
        int skaicius;
        sk >> skaicius;
        Ausros_Kolekcija.push_back(skaicius);
    }

    sk >> Ruta_Turi;
    for (int i = 0; i < Ruta_Turi; i++)
    {
        int skaicius;
        sk >> skaicius;
        Rutos_Kolekcija.push_back(skaicius);
    }
}
void sprendimas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija, vector<int> &Pasikartoja, vector<int> &Pasiulymai)
{
    for (int i = 0; i < Ausros_Kolekcija.size(); i++)
    {
        int kiek = 1;
        while (i + 1 < Ausros_Kolekcija.size() && Ausros_Kolekcija[i] == Ausros_Kolekcija[i + 1])
        {
            kiek++;
            i++;
        }
        if (kiek > 1)
        {
            Pasikartoja.push_back(Ausros_Kolekcija[i]);
        }
    }

    for (int i = 0; i < Pasikartoja.size(); i++)
    {
        bool RutosTuri = false;
        for (int j = 0; j < Rutos_Kolekcija.size(); j++)
        {
            if (Pasikartoja[i] == Rutos_Kolekcija[j])
            {
                RutosTuri = true;
                break;
            }
        }
        if (RutosTuri == false)
        {
            Pasiulymai.push_back(Pasikartoja[i]);
        }
    }

}
void spausdinimas(int &Ausra_Turi, int &Ruta_Turi, vector<int> &Ausros_Kolekcija, vector<int> &Rutos_Kolekcija, vector<int> &Pasikartoja, vector<int> &Pasiulymai)
{
    ofstream rez("Rez.txt");

    if (Pasiulymai.size() == 0)
    {
        rez << "Nera";
    }
    else
    {
        for (int i = 0; i < Pasiulymai.size(); i++)
        {
            rez << Pasiulymai[i] << " ";
        }
    }
}
