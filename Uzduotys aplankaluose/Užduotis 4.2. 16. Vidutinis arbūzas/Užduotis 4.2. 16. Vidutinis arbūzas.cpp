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

    for(int i = 1; i < arbuzai.size(); i++)
    {
        if(abs(vidurkis - arbuzai[nr]) > abs(vidurkis - arbuzai[i]))
        {
            nr = i;
        }
    }
    return nr + 1;
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

    arbuzai.resize(n);

    for(int i = 0; i < n; i++)
    {
        fin >> arbuzai[i];
    }
}
