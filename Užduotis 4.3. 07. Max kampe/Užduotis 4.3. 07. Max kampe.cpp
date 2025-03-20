#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &A);
int radimas(vector<vector<int>> &A);
void spausdinimas(int maz);

int main()

{
    vector<vector<int>> A; //dvimate matrica

    skaitymas(A);
    spausdinimas(radimas(A));

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

int radimas(vector<vector<int>> &A)
{
    int did = A[0][0];
    did = max(did, A[0][A[0].size() - 1]);
    did = max(did, A[A.size() - 1][0]);
    did = max(did, A[A.size() - 1][A[0].size() - 1]);

    return did;
}

void skaitymas(vector<vector<int>> &A)
{
    ifstream sk("U1.txt");

    int n, k;
    sk >> n >> k; //size

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(k); ///temporary

        for (int j = 0; j < k; j++)
        {
            sk >> temp[j];
        }
        A.push_back(temp); //temporary --> main
    }
}


