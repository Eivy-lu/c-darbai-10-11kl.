#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &talpa, int n, int &turis);
int skaiciavimas(vector<int> talpa, int n, int turis);
void spausdinimas(vector<int> &talpa, int n, int &turis);

int main()
{
    vector<int> talpa;
    int n;
    int turis;

    skaitymas(talpa, n, turis);
    spausdinimas(talpa, n, turis);
    skaiciavimas(talpa, n, turis);

    return 0;
}
void spausdinimas(vector<int> &talpa, int n, int &turis)
{
    ofstream rez ("Rez.txt");
    if (skaiciavimas(talpa, n, turis) == 0)
    {
        rez <<"Ne"<<endl;
    }
    else if (skaiciavimas(talpa, n, turis) == turis)
    {
        rez <<"Taip"<<endl;
    }
}

int skaiciavimas(vector<int> talpa, int n, int turis)
{
    for (int i = 0; i < n; i++)
    {
        if (talpa[i] == turis)
        {
            return turis;
            break;
        }
        else
        {
            return 0;
        }
    }
}

void skaitymas(vector<int> &talpa, int n, int &turis)
{
    ifstream sk ("Duom.txt");
    sk >> n;
    int dydis;

    for(int i = 0; i <= n; i++)
    {
        sk >> dydis;
        talpa.push_back(dydis);
    }
    sk >> turis;
}
