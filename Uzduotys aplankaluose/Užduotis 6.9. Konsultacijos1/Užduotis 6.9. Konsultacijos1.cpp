#include <bits/stdc++.h>

using namespace std;

struct Mokinys
{
    string vardas;
    int laikas;
};

void skaitymas(vector<Mokinys> &mokiniai);
int rasLaika(vector<Mokinys> &mokiniai);
void spausdinimas(vector<Mokinys> &mokiniai, int &ilgiausias);

int main()
{
    vector<Mokinys> mokiniai;

    skaitymas(mokiniai);
    int ilgiausias = rasLaika(mokiniai);
    spausdinimas(mokiniai, ilgiausias);

    return 0;
}

void spausdinimas(vector<Mokinys> &mokiniai, int &ilgiausias)
{
    ofstream rez("U2rez.txt");
    for(int i = 0; i < mokiniai.size(); i++)
    {
        if (ilgiausias == mokiniai[i].laikas)
        {
            rez << mokiniai[i].vardas <<" "<< mokiniai[i].laikas/60 <<" "<< mokiniai[i].laikas%60 <<endl;
        }
    }
}

int rasLaika(vector<Mokinys> &mokiniai)
{
    int did = INT_MIN;
    for(int i = 0; i < mokiniai.size(); i++)
    {
        if(did < mokiniai[i].laikas)
        {
            did = mokiniai[i].laikas;
        }
    }
    return did;
}

void skaitymas(vector<Mokinys> &mokiniai)
{
    ifstream sk("U2.txt");

    int n;
    sk >> n;

    mokiniai.resize(n);

    for(int i = 0; i < n; i++)
    {
        sk >> ws; ///praleidzia space, tab, enter
        char temp[20+1];
        sk.get(temp,20+1);
        mokiniai[i].vardas = temp;

        int h1, m1;
        int h2, m2;

        sk >> h1 >> m1 >> h2 >> m2;

        mokiniai[i].laikas = h2 * 60 + m2 - (h1 * 60 + m1);
    }
}

