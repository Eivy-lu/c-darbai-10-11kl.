#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Ausra_Turi;
    int Ruta_Turi;
    vector<int> Ausros_Kolekcija;
    vector<int> Rutos_Kolekcija;
    vector<int> Ausros_Atiduodami;

    ifstream sk("Duom.txt");
    ofstream rez("Rez.txt");

    sk >> Ausra_Turi;
    for(int i = 0; i < Ausra_Turi; i ++)
    {
        int temp;
        sk >> temp;
        Ausros_Kolekcija.push_back(temp);
    }

    sk >> Ruta_Turi;
    for(int i = 0; i < Ruta_Turi; i ++)
    {
        int temp;
        sk >> temp;
        Rutos_Kolekcija.push_back(temp);
    }

    for(int i = 0; i < Ausros_Kolekcija.size(); i++)
    {
        for(int j = i + 1; j < Ausros_Kolekcija.size(); j++)
        {
            int temp = 0;
            if(Ausros_Kolekcija[i] == Ausros_Kolekcija[j])
            {
                Ausros_Kolekcija.erase(Ausros_Kolekcija.begin() + i);
                for(int k = 0; k < Ausros_Atiduodami.size(); k++)
                {
                    for(int m = 0; m < Ausros_Atiduodami.size(); m++)
                    {
                        if(Ausros_Kolekcija[i] == Ausros_Atiduodami[m])
                        {
                            break;
                        }
                        else
                        {
                            temp = Ausros_Kolekcija[i];
                            Ausros_Atiduodami.push_back(temp);
                        }
                    }

                }
            }
            --i;
            --j;
            break;
        }
    }
}

///nieko nereiskia
/*for(int i = 0; i < Rutos_Kolekcija.size(); i++)
{
    for(int j = i + 1; j < Rutos_Kolekcija.size(); j++)
    {
        if(Rutos_Kolekcija[i] == Rutos_Kolekcija[j])
        {
            Rutos_Kolekcija.erase(Rutos_Kolekcija.begin() + i);

            --i;
            --j;
            break;
        }
    }
}*/

for(int i = 0; i < Ausros_Atiduodami.size(); i++)
{
    for(int j = 0; j < Rutos_Kolekcija.size(); j++)
    {
        if(Ausros_Atiduodami[i] == Rutos_Kolekcija[j])
        {
            Ausros_Atiduodami.erase(Ausros_Atiduodami.begin() + i);
            Rutos_Kolekcija.erase(Rutos_Kolekcija.begin() + j);

            --i;
            --j;
            break;
        }
    }
}

for(int i = 0; i < Ausros_Atiduodami.size(); i++)
{
    rez << Ausros_Atiduodami[i]<<" ";
}

return 0;
}
