#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &seka);
void spausdinimas(vector<int> seka);
string skaiciavimas(vector<int> seka);

int main()
{
    vector<int> seka;

    skaitymas(seka);
    spausdinimas(seka);

    return 0;
}

string skaiciavimas(vector<int> seka)
{
    int kiekis = 0;
    for (int i = 0; i < seka.size(); i++)
    {
        kiekis = 0;
        for (int j = i+1; j < seka.size(); j++)
        {
            if (seka[i] == seka[j])
            {
                kiekis++;
                if (kiekis >= 3)
                {
                    return "TAIP";
                }
            }
        }
    }

    return "NE";
}

void spausdinimas(vector<int> seka)
{
    ofstream fout("U1rez.txt");

    fout << skaiciavimas(seka) << endl;
}

void skaitymas(vector<int> &seka)
{
    ifstream fin("U1.txt");

    int n;
    fin >> n;

    for(int i = 0; i < n; i++)
    {
        int skaiciai;
        fin >> skaiciai;

        seka.push_back(skaiciai);
    }
}
