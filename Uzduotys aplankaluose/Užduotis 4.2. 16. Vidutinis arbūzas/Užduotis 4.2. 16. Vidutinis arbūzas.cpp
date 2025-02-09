#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &arbuzai);
void spausdinimas(vector<int> arbuzai);
int numeris(vector<int> arbuzai);

int main()
{
    vector<int> arbuzai;

    skaitymas(arbuzai);
    spausdinimas(arbuzai);

    return 0;
}

int numeris(vector<int> arbuzai)
{
    double vidurkis = 0;
    for(auto a: arbuzai) vidurkis += a;
    vidurkis /= arbuzai.size();

    int nr = 0;
    double skirtumas = INT_MAX; ///maksimalus int tipo kintamasis

    for(int i = 0; i < arbuzai.size(); i++)
    {
        if(skirtumas > abs(vidurkis - arbuzai[i]))
        {
            skirtumas = abs(vidurkis - arbuzai[i]); ///saugomas skirtumas
            nr = i + 1; ///saugomas numeris
        }
    }

    return nr;
}

void spausdinimas(vector<int> arbuzai)
{
    ofstream fout("U1rez.txt");

    fout << numeris(arbuzai) << endl;
}

void skaitymas(vector<int> &arbuzai)
{
    ifstream fin("U1.txt");

    int n;
    fin >> n;

    for(int i = 0; i < n; i++)
    {
        int svoris;
        fin >> svoris;

        arbuzai.push_back(svoris);
    }
}
