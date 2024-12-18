#include <bits/stdc++.h>

using namespace std;

void skaitymas(int &n, int seka[]);
string lyginumas (int &n, int seka[]);
void spausdinimas(string ats);

int main()
{
    int seka[10];
    int n;

    skaitymas(n, seka);
    string ats = lyginumas (n, seka);
    spausdinimas(ats);

    return 0;
}
string lyginumas (int &n, int seka[])
{
    int lyginiu = 0;
    int nelyginiu = 0;

    for (int i = 0; i < n; i++)
    {
        if (seka[i] % 2 == 0) lyginiu++;
        else nelyginiu++;
    }

    if (lyginiu > nelyginiu) return "NELYGINIS";
    else return "LYGINIS";


}
void spausdinimas (string ats)
{
    ofstream fr("U1rez.txt");
    fr << ats;
}


void skaitymas(int &n, int seka[])
{
    ifstream fd("U1.txt");

    fd >> n;

    for(int i = 0; i < n; i++)
    {
        fd >> seka[i];
    }

}
