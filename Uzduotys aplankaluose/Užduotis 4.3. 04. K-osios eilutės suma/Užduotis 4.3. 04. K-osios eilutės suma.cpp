#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &A, int &k);
int radimas(vector<vector<int>> &A, int &k);
void spausdinimas(int suma);

int main()

{
    vector<vector<int>> A; //two-dimensional array NxN
    int k;

    skaitymas(A, k);
    spausdinimas(radimas(A, k));

    return 0;
}

void spausdinimas(int suma)
{
    ofstream rez("U1rez.txt");

    rez << suma;
}

int radimas(vector<vector<int>> &A, int &k)
{
    int suma = 0;

    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A.size(); j++)
        {
            if (i+1 == k)
            {
                suma += A[i][j];
            }
        }
    }
    return suma;
}

void skaitymas(vector<vector<int>> &A, int &k)
{
    ifstream sk("U1.txt");

    int N; //array size

    sk >> N >> k;

    for(int i = 0; i < N; i++)
    {
        vector<int> temp(N); ///temporary

        for(int j = 0; j < N; j++)
        {
            sk >> temp[j];
        }
        A.push_back(temp); //temporary --> main
    }
}
