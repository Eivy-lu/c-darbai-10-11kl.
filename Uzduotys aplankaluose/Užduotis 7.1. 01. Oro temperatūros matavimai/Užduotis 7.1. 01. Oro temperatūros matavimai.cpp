#include <bits/stdc++.h>

using namespace std;

struct orai
{
    string menesis;
    vector<int> temperatura;
};

void skaitymas(vector<orai> &menesiai, double &vid);
void spausdinimas(vector<orai> &menesiai, double &vid);

int main()
{
    vector<orai> menesiai;
    double vid;

    skaitymas(menesiai, vid);
    spausdinimas(menesiai, vid);

    return 0;
}

void spausdinimas(vector<orai> &menesiai, double &vid)
{
    ofstream fout("Rezultatai.txt");

    for(int i = 0; i < menesiai.size(); i++)
    {
        fout << menesiai[i].menesis <<fixed<<setprecision(2)<< vid <<endl;
    }
}

void skaitymas(vector<orai> &menesiai, double &vid)
{
    ifstream fin("Duomenys.txt");

    int n, m;
    fin >> n >> m;

    menesiai.resize(n);

    for(int i = 0; i < n; i++)
    {
        menesiai[i].temperatura.resize(11);

        fin.ignore(80, '\n');

        char temp[16];
        fin.get(temp, 16);
        menesiai[i].menesis = temp;

        for (int j = 0; j < m; j++) ///m cards
        {
            int skaicius;
            fin >> skaicius;

            menesiai[i].temperatura[skaicius]++;
        }

        for (int j = 0; j < 12; j++)
        {
            double sum = 0;
            sum += menesiai[i].temperatura[j];
            vid = sum / m;
        }
    }
}
