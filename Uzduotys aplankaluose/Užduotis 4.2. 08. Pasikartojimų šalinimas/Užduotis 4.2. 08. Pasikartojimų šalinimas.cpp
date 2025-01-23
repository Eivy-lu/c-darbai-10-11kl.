#include <bits/stdc++.h>

using namespace std;

void skaitymas (vector<int> &seka);
void trynimas (vector<int> &seka);
void spausdinimas (vector<int> &seka);

int main()
{
    vector<int> seka;

    skaitymas (seka);
    trynimas (seka);
    spausdinimas (seka);

    return 0;
}

///spausdinimas
void spausdinimas (vector<int> &seka)
{
    ofstream fout("rez.txt");

    for (int i = 0; i < seka.size(); i++)
    {
        if (i == 0)
        {
            fout << seka[i];
        }
        else fout <<" " << seka[i];
    }
}

///trynimas
void trynimas (vector<int> &seka)
{
    for (int i = 0; i < seka.size(); i++)
    {
        for (int j = i + 1; j < seka.size(); j++)
        {
            if (seka[i] == seka[j])
            {
                seka.erase(seka.begin()+j);
                j--;
            }
        }
    }
}

///skaitymas
void skaitymas (vector<int> &seka)
{
    int n;

    ifstream fin("duom.txt");
    fin >> n;

    for (int i = 0; i < n; i++)
    {
        int skaiciai;
        fin >> skaiciai;

        seka.push_back(skaiciai);
    }
}
