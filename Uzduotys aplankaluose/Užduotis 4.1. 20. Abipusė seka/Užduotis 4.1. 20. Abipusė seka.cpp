#include <bits/stdc++.h>

using namespace std;

void skaitymas(int &n, int A[]);
string simetrija(int &n, int A[]);
void spausdinimas(string pozymis);

int main()
{
    int A[10];
    int n;

    skaitymas(n, A);
    spausdinimas(simetrija(n, A));

    return 0;
}

void spausdinimas(string pozymis)
{
    ofstream rez("U1rez.txt");
    rez << pozymis;
}

string simetrija(int &n, int A[])
{

    for(int i = 0; i < n/2; i++)
    {
        if(A[i] != A[n - i])
    {
        return "NE";
    }
}

return "TAIP";
}

void skaitymas(int &n, int A[])
{
    ifstream fin("U1.txt");
    fin >> n;

    for(int i = 0; i < n; i++)
    {
        fin >> A[i];
    }
}
