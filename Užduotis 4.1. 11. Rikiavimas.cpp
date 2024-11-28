#include <bits/stdc++.h>

using namespace std;

void skaitymas(int &n, int masyvas[]); ///f-jos prototipas
void rikiavimas(int &n, int masyvas[]);
void spausdinimas(int &n, int masyvas[]);

int main()
{
    int masyvas[10];
    int n; ///masyvo nariu skaicius

    skaitymas(n, masyvas);
    rikiavimas(n, masyvas);
    spausdinimas(n, masyvas);

    return 0;
}

void spausdinimas(int &n, int masyvas[])
{
    ofstream fr("U1rez.txt");

    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            fr << masyvas[i];
        }
        else
        {
            fr << "," << masyvas[i];
        }
    }

    fr.close();
}

void rikiavimas(int &n, int masyvas[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(masyvas[i] > masyvas[j])
            {
                swap(masyvas[i], masyvas[j]);
            }
        }
    }
}

void skaitymas(int &n, int masyvas[])
{
    ifstream fd("U1.txt");

    fd >> n;

    for(int i = 0; i < n; i++)
    {
        fd >> masyvas[i];
    }

    fd.close();
}

