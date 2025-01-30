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

    return seka [0] - seka [seka.size()-1];
}

void skaitymas (vector<int> &seka)
{
    ifstream fin("duom.txt");

    int n;
    fin >> n;

    for (int i = 0; i < n ; i++)
    {
        int metai;
        fin >> metai;

        seka.push_back(metai);
    }
}
void spausdinimas (int suma)
{
    ofstream fout("rez.txt");

    fout << suma;
}
