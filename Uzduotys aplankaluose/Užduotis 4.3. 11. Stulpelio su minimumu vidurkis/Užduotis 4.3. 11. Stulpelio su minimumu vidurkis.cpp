#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &matrica);
double radimas(vector<vector<int>> &matrica);
void spausdinimas(double suma);

int main()

{
    vector<vector<int>> matrica;

    skaitymas(matrica);
    spausdinimas(radimas(matrica));

    return 0;
}
void spausdinimas(double suma)
{
    ofstream fout("U1rez.txt");
    fout << fixed << setprecision(2) << suma;
}

double radimas(vector<vector<int>> &matrica)
{
    int nr; //line
    int maz = INT_MAX;

    for(int i = 0; i < matrica.size(); i++)
    {
        for(int j = 0; j < matrica[i].size(); j++)
        {
            if(maz > matrica[i][j])
            {
                maz = matrica[i][j];
                nr = j;
            }
        }
    }

    double suma = 0;

    for (int i = 0; i < matrica.size(); i++)
    {
        suma += matrica[i][nr];
    }

    return suma / matrica.size();
}

void skaitymas(vector<vector<int>> &matrica)
{
    ifstream sk("U1.txt");

    int n, k;
    sk >> n >> k;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(k); ///temporary

        for (int j = 0; j < k; j++)
        {
            sk >> temp[j];
        }
        matrica.push_back(temp); //temporary --> main
    }
}


