#include <bits/stdc++.h>

using namespace std;

void skaitymas (vector<int> &menuo, int &t0);
void spausdinimas (vector<int> &menuo, int &t0);
int skaiciavimas (vector<int> &menuo, int &t0);

int main()

{
    vector<int> menuo;
    int t0;


    skaitymas (menuo, t0);
    spausdinimas (menuo, t0);

    return 0;
}
int skaiciavimas (vector<int> &menuo, int &t0)
{
    int kiekis = 0;

    for (int i = 0; i < menuo.size(); i++)
    {
        if (menuo[i] > 0 && menuo[i] <= t0)
        {
            kiekis ++;
        }
    }
}
void skaitymas (vector<int> &menuo, int &t0)
{
    ifstream sk ("duom.txt");
    sk >> t0;


    for (int i = 0; i <= 30; i++)
    {
        int temp;
        sk >> temp;

        menuo.push_back(temp);
    }

}
void spausdinimas (vector<int> &menuo, int &t0)
{
    ofstream rez ("rez.txt");

    rez << skaiciavimas (menuo, t0);

}

