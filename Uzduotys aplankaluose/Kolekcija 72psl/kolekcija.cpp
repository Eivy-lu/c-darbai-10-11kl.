#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Ausra_Turi;
    int Ruta_Turi;
    vector<int> Ausros_Kolekcija;
    vector<int> Rutos_Kolekcija;
    vector<int> Pasikartoja;
    vector<int> Pasiulymai;

    ifstream sk("Duom.txt");
    ofstream rez("Rez.txt");

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
        if (!RutosTuri)
        {
            Pasiulymai.push_back(Pasikartoja[i]);
        }
    }

    if (Pasiulymai.size() == 0)
    {
        rez << "nera";
    }
    else
    {
        for (int i = 0; i < Pasiulymai.size(); i++)
        {
            rez << Pasiulymai[i] << " ";
        }
    }

    return 0;
}
