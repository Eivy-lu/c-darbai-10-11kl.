#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &temperaturos, int &t0, int &kiek_teigiama);
void sprendimas(vector<int> &temperaturos, int &t0, int &kiek_teigiama);
void spausdinimas(vector<int> &temperaturos, int &t0, int &kiek_teigiama);

int main()
{
    vector<int> temperaturos;
    int t0;
    int kiek_teigiama = 0;

    skaitymas(temperaturos, t0, kiek_teigiama);
    sprendimas(temperaturos, t0, kiek_teigiama);
    spausdinimas(temperaturos, t0, kiek_teigiama);
}
void spausdinimas(vector<int> &temperaturos, int &t0, int &kiek_teigiama)
{
    ofstream rez("rez.txt");
    rez << kiek_teigiama;
}
void sprendimas(vector<int> &temperaturos, int &t0, int &kiek_teigiama)
{
    for(int i = 0; i < temperaturos.size(); i++)
    {
        if((temperaturos[i] >= 0) && (temperaturos[i] <= t0))
        {
            kiek_teigiama++;
        }
    }
}
void skaitymas(vector<int> &temperaturos, int &t0, int &kiek_teigiama)
{
    ifstream sk("duom.txt");
    sk >> t0;

    temperaturos.size(100)

    for(int i = 0; i < temperaturos.size(); i++)
    {
        int temp;
        sk >> temp;
        temperaturos.push_back(temp);
    }
}
