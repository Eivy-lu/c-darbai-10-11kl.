#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &seka);
void rikiavimas(vector<int> &seka);
int radimas (vector<int> &seka);
void spausdinimas(int ats);

int main()

{
    vector<int> seka;

    skaitymas(seka);
    rikiavimas(seka);
    spausdinimas(radimas(seka));

    return 0;
}

void skaitymas(vector<int> &seka)
{
    int n;
    cin >> n;

    seka.resize(n);

    for (int i = 0; i < n; i++)
    {
        int eurai, centai;
        cin >> eurai >> centai;
        seka [i] = eurai * 100 + centai;
    }
}

void rikiavimas(vector<int> &seka)
{
    for (int i = 0; i < seka.size(); i++)
    {
        for (int j = i+1; j < seka.size(); j++)
        {
            if (seka[i] < seka[j])
            {
               swap (seka[i], seka[j]);
            }
        }
    }
}

int radimas (vector<int> &seka)
{
    int kiek = 0;

    for (int i = 0; i < seka.size(); i++)
    {
        if (seka[0] == seka [i])
        {
            kiek++;
        }
    }
    return kiek;
}

void spausdinimas(int ats)
{
    cout << ats <<endl;
}
