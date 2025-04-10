#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &matrica);
int radimas(vector<vector<int>> &matrica);
void spausdinimas(int suma);

int main()

{
    vector<vector<int>> matrica;

    skaitymas(matrica);
    spausdinimas(radimas(matrica));

    return 0;
}
void spausdinimas(int suma)
{
    ofstream fout("U1rez.txt");
    fout <<suma;
}

int radimas(vector<vector<int>> &matrica)
{
    int suma = 0;

    for(int i = 0; i < matrica.size(); i++)
    {
        suma += matrica[i][i];
    }
    return suma;
}

void skaitymas(vector<vector<int>> &matrica)
{
    ifstream sk("U1.txt");

    int n;
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n); ///temporary

        for (int j = 0; j < n; j++)
        {
            sk >> temp[j];
        }
        matrica.push_back(temp); //temporary --> main
    }
}


