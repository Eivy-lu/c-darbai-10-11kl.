#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &masyvas, int &n, int &kiekis);
void sprendimas(vector<int> &masyvas, int &n, int &kiekis);
void spausdinimas(vector<int> &masyvas, int &n, int &kiekis);

int main()
{
    vector<int> masyvas;
    int n;
    int kiekis = 0;

    skaitymas(masyvas, n, kiekis);
    sprendimas(masyvas, n, kiekis);
    spausdinimas(masyvas, n, kiekis);
}
void spausdinimas(vector<int> &masyvas, int &n, int &kiekis)
{
    ofstream rez("rez.txt");
    rez << kiekis;
}
void sprendimas(vector<int> &masyvas, int &n, int &kiekis)
{
    for(int i = 0; i < n; i++)
    {
        if(masyvas[i] / 10 == 3)
        {
            kiekis++;
        }
    }
}
void skaitymas(vector<int> &masyvas, int &n, int &kiekis)
{
    ifstream sk("duom.txt");
    sk >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;
        sk >> temp;
        masyvas.push_back(temp);
    }
}
