#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &skaiciai);
int daugiausiai(vector<int> &skaiciai);
void spausdinimas(int did);

int main()
{
    vector <int> skaiciai;

    skaitymas(skaiciai);
    int did = daugiausiai(skaiciai);
    spausdinimas(did);

    return 0;
}

void spausdinimas(int did)
{
    ofstream fout("U1rez.txt");
    fout << did;
}

//ctrl + d
//ctrl + shift + t atsaukti x

int daugiausiai(vector<int> &skaiciai)
{
    int did = 0;

    sort(skaiciai.begin(), skaiciai.end());

    int sand1 = skaiciai[0]*skaiciai[1];
    int sand2 = skaiciai[skaiciai.size()-1]*skaiciai[skaiciai.size()-2];

    if (sand1 > sand2) return sand1;
    else return sand2;

}

void skaitymas(vector<int> &skaiciai)
{
    ifstream sk("U1.txt");

    int n;
    sk >> n;

    skaiciai.resize(n);

    for (int i = 0; i < n; i++)
    {
        sk >> skaiciai[i];
    }
}
