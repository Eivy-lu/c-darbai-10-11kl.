#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &gaminiai, int &talpa, int &n);
int skaiciavimas(vector<int> &gaminiai, int talpa, vector<int> &uzpildyti);
void spausdinimas(int kiek, vector<int> &uzpildyti, int talpa);

int main()
{
    vector<int> gaminiai;
    int n, talpa;

    skaitymas(gaminiai, talpa, n);
    vector<int> uzpildyti(talpa + 1);
    int kiek = skaiciavimas(gaminiai, talpa, uzpildyti);
    spausdinimas(kiek, uzpildyti, talpa);

    return 0;
}

void spausdinimas(int kiek, vector<int> &uzpildyti, int talpa)
{
    ofstream rez("rez.txt");
    rez << kiek << endl;

    for (int i = talpa; i >= 1; i--)
    {
        rez << uzpildyti[i] << endl;
    }
}

int skaiciavimas(vector<int> &gaminiai, int talpa, vector<int> &uzpildyti)
{
    int kontein = 0;
    int uzpildyta;

    for (int i = 0; i < gaminiai.size(); i++)
    {
        int gaminiu_kiekis = gaminiai[i];
        {
            while (gaminiu_kiekis > 0)
            {
                if (gaminiu_kiekis <= talpa)
                {
                    uzpildyta = gaminiu_kiekis;
                }
                else
                {
                    uzpildyta = talpa;
                }
                uzpildyti[uzpildyta]++;
                kontein++;
                gaminiu_kiekis -= uzpildyta;
            }
        }
        return kontein;
    }
}

void skaitymas(vector<int> &gaminiai, int &talpa, int &n)
{
    ifstream sk("duom.txt");
    sk >> n >> talpa;

    gaminiai.resize(n);
    for (int i = 0; i < n; i++)
    {
        sk >> gaminiai[i];
    }
}
