#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &verzles);
int daugiausiai(vector<int> &verzles);
void spausdinimas(vector<int> &verzles, int nr);

int main()

{
    vector<int> verzles(17);

    skaitymas(verzles);
    spausdinimas(verzles, daugiausiai(verzles));

    return 0;
}

void spausdinimas(vector<int> &verzles, int nr)
{
    ofstream rez("rez.txt");

    for(int i = 0; i < verzles.size(); i++)
    {
        if (verzles[i] > 0)
        {
            rez << i <<" "<< verzles[i] <<endl;
        }
    }

    rez<< "Daugiausia yra ";

    int pirmas = 0;

    for (int i = 0; i < verzles.size(); i++)
    {
        if (verzles[nr] == verzles[i])
        {
            if (pirmas == 0)
            {
                rez << i;
                pirmas ++;
            }
            else
            {
                rez <<", " << i;
                pirmas ++;
            }
        }
    }

    if (pirmas > 1)
    {
        rez <<" rûðiø"<< endl;
    }
    else
    {
        rez <<" rûðies"<< endl;
    }
}

int daugiausiai(vector<int> &verzles)
{
    int nr = 0;

    for (int i = 0; i < verzles.size(); i++)
    {
        if (verzles[nr] < verzles[i])
        {
            nr = i;
        }
    }
    return nr;
}

void skaitymas(vector<int> &verzles)
{
    ifstream sk("duom.txt");

    int n;
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        int dydis, kiekis;
        sk >> dydis >> kiekis;

        verzles[dydis] += kiekis;
    }
}
