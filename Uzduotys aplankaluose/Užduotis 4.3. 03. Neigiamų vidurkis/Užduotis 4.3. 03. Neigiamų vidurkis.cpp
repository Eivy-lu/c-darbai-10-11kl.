#include <bits/stdc++.h>

using namespace std;

void skaitymas(int masyvas[][10], int &n, int &m);
double radimas(int masyvas[][10], int &n, int &m);
void spausdinimas(double suma);

int main()

{
    int masyvas [10][10];
    int n, m;

    skaitymas (masyvas, n, m);
    spausdinimas(radimas(masyvas, n, m));

    return 0;
}

void spausdinimas(double suma)
{
    ofstream rez("U1rez.txt");

    if(suma == 0)
    {
        rez<<"NO"<<endl;
    }

    else rez <<fixed<<setprecision(3)<< suma;
}

double radimas(int masyvas[][10], int &n, int &m)
{
    double suma = 0;
    int kiekis = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (masyvas[i][j] < 0)
            {
                suma += masyvas[i][j];
                kiekis ++;
            }
        }
    }
    if(suma == 0)
    {
        return suma = 0;
    }
    else return suma / kiekis;
}

void skaitymas(int masyvas[][10], int &n, int &m)
{
    ifstream sk("U1.txt");

    sk >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sk >> masyvas[i][j];
        }
    }
}
