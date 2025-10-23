#include <bits/stdc++.h>

using namespace std;

void skaitymas(int &n, int A[]);
string lyginumas(int &n, int A[]);
void spausdinimas(string pozymis);

int main()
{
    int A[10];
    int n;

    skaitymas(n, A);
    spausdinimas(lyginumas(n, A));

    return 0;
}

void spausdinimas(string pozymis)
{
    ofstream rez("U1rez.txt");
    rez << pozymis;
}

string lyginumas(int &n, int A[])
{
    int lyginiai = 0;
    int nelyginiai = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] % 2 == 0)
        {
            lyginiai++;
        }
        else
        {
            nelyginiai++;
        }
    }

        if(lyginiai == 1) return "LYGINIS";
        else return "NELYGINIS";
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
