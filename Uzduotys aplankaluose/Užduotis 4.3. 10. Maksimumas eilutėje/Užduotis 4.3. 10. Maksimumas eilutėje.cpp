#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &matrica);
int radimas(vector<vector<int>> &matrica);
void spausdinimas(int did);

int main()

{
    vector<vector<int>> matrica;

    skaitymas(matrica);
    spausdinimas(radimas(matrica));

    return 0;
}
void spausdinimas(int did)
{
    ofstream fout("U1rez.txt");
    fout <<did;
}

int radimas(vector<vector<int>> &matrica)
{
    int nr; //line
    double vidurkis = INT_MAX;

    for(int i = 0; i < matrica.size(); i++)
    {
        double suma = 0;
        for(int j = 0; j < matrica[i].size(); j++)
        {
            suma += matrica[i][j];
        }

        if (vidurkis > suma/matrica[i].size())
        {
            vidurkis = suma/matrica[i].size();
            nr = i;
        }
    }

    int did = INT_MIN;

    for (int i = 0; i < matrica[nr].size(); i++)
    {
        if (did < matrica[nr][i])
        {
            did = matrica[nr][i];
        }
    }

    return did;
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


