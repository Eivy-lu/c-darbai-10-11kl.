#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &seka);
int radimas(vector<int> &seka);
void spausdinimas(int suma);

int main()
{
    vector<int> seka;

    skaitymas(seka);
    int suma = radimas(seka);
    spausdinimas(suma);

    return 0;
}
int radimas (vector<int> &seka)
{
    for (int i = 0; i < seka.size(); i++)
    {
        for (int j = i+1; j < seka.size(); j++)
        {
            if (seka[i] < seka [j])
            {
                swap(seka[i], seka [j]);
            }
        }
    }

    int kiek = 0;

    for (int i = 0; i < seka.size(); i++)
    {
        if (seka[0] == seka[i])
        {
            kiek++;
        }
    }

    return kiek;
}

void skaitymas (vector<int> &seka)
{
    ifstream fin("duom.txt");

    int n;
    fin >> n;

    for (int i = 0; i < n ; i++)
    {
        int eurai, centai;
        fin >> eurai >> centai;

        seka.push_back(eurai * 100 + centai);
    }
}
void spausdinimas (int suma)
{
    ofstream fout("rez.txt");

    fout << suma;
}
