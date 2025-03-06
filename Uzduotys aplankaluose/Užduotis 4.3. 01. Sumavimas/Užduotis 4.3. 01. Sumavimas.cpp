#include <bits/stdc++.h>

using namespace std;

void skaitymas(int masyvas[][10], int &n, int &m);
int radimas(int masyvas[][10], int &n, int &m);
void spausdinimas(int suma);

int main()

{
    int masyvas [10][10];
    int n, m;

    skaitymas (masyvas, n, m);
    spausdinimas(radimas(masyvas, n, m));

    return 0;
}

void spausdinimas(int suma)
{
    ofstream rez("U1rez.txt");
    rez << suma;
}

int radimas(int masyvas[][10], int &n, int &m)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            suma += masyvas[i][j];
        }
    }
    return suma;
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
