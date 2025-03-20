#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<vector<int>> &A);
int radimas(vector<vector<int>> &A);
void spausdinimas(int did);

int main()

{
    vector<vector<int>> A; //dvimate matrica

    skaitymas(A);
    spausdinimas(radimas(A));

    return 0;
}

void spausdinimas(int did)
{
    ofstream rez("U1rez.txt");

    if (did == INT_MIN)
    {
        rez <<"NO"<<endl;
    }
    else rez << did;
}

int radimas(vector<vector<int>> &A)
{
    int did = INT_MIN;

    for(int i = 0; i < A[0].size(); i++)
    {
        if(A.size() > 1 && did < A[1][i])
        {
            did = A[1][i];
        }
    }

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


