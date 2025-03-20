#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &A, int &k);
int radimas(vector<vector<int>> &A, int &k);
void spausdinimas(int maz);

int main()

{
    vector<vector<int>> A; //dvimate matrica
    int k;

    skaitymas(A, k);
    spausdinimas(radimas(A, k));

    return 0;
}

void spausdinimas(int maz)
{
    ofstream rez("U1rez.txt");

    if (maz == INT_MAX)
    {
        rez <<"NO"<<endl;
    }
    else rez << maz;
}

int radimas(vector<vector<int>> &A, int &k)
{
    int maz = INT_MAX;

    for(int i = k; i < A.size(); i++)
    {
        for(int j = 0; j < A.size(); j++)
        {
            if (maz > A[i][j])
            {
                maz = A[i][j];
            }
        }
    }
    return maz;
}

void skaitymas(vector<vector<int>> &A, int &k)
{
    ifstream sk("U1.txt");

    int n;
    sk >> n >> k;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n); ///temporary

        for (int j = 0; j < n; j++)
        {
            sk >> temp[j];
        }
        A.push_back(temp); //temporary --> main
    }
}


