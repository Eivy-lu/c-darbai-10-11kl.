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
    return seka[0] + seka [1];
}

void skaitymas (vector<int> &seka)
{
    ifstream fin("U1.txt");

    int n;
    fin >> n;

    for (int i = 0; i < n ; i++)
    {
        int skaiciai;
        fin >> skaiciai;

        seka.push_back(skaiciai);
    }
}
void spausdinimas (int suma)
{
    ofstream fout("U1rez.txt");

    fout << suma;
}
