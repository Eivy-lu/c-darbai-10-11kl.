#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &prekes, int &visi_pinigai, int &lentynu_sk, vector<int> &lentynose_prekiu_sk);
void sprendimas(vector<int> prekes, int visi_pinigai, int lentynu_sk, vector<int> lentynose_prekiu_sk, int &pirkiniu_sk, int &nusipirktos_prekes, int &pinigai_liko);
void spausdinimas(int &pirkiniu_sk, int &pinigai_liko);

int main()
{
    vector<int> prekes;
    vector<int> lentynose_prekiu_sk;
    int visi_pinigai;
    int lentynu_sk;
    int nusipirktos_prekes = 0;
    int pirkiniu_sk = 0;
    int pinigai_liko;

    skaitymas(prekes, visi_pinigai, lentynu_sk, lentynose_prekiu_sk);
    sprendimas(prekes, visi_pinigai, lentynu_sk, lentynose_prekiu_sk, pirkiniu_sk, nusipirktos_prekes, pinigai_liko);
    spausdinimas(pirkiniu_sk, pinigai_liko);

    return 0;
}

void skaitymas(vector<int> &prekes, int &visi_pinigai, int &lentynu_sk, vector<int> &lentynose_prekiu_sk)
{
    ifstream sk("duom.txt");
    sk >> visi_pinigai >> lentynu_sk;

    for(int i = 0; i < lentynu_sk; i++)
    {
        int kiek;
        sk >> kiek;
        lentynose_prekiu_sk.push_back(kiek);
        for(int j = 0; j < kiek; j++)
        {
            int temp;
            sk >> temp;
            prekes.push_back(temp);
        }
    }
}

void sprendimas(vector<int> prekes, int visi_pinigai, int lentynu_sk, vector<int> lentynose_prekiu_sk, int &pirkiniu_sk, int &nusipirktos_prekes, int &pinigai_liko)
{
    int indeksas = 0;

    for (int i = 0; i < lentynu_sk; i++)
    {
        int brangiausia = -1;
        int brangiausios_indeksas = -1;

        for (int j = 0; j < lentynose_prekiu_sk[i]; j++, indeksas++)
        {
            if (prekes[indeksas] > brangiausia && prekes[indeksas] <= visi_pinigai)
            {
                brangiausia = prekes[indeksas];
                brangiausios_indeksas = indeksas;
            }
        }

        if (brangiausios_indeksas != -1)
        {
            visi_pinigai -= brangiausia;
            pirkiniu_sk++;
            nusipirktos_prekes++;
        }
    }
    pinigai_liko = visi_pinigai;
}

void spausdinimas(int &pirkiniu_sk, int &pinigai_liko)
{
    ofstream rez("rez.txt");
    rez << pirkiniu_sk << " " << pinigai_liko << endl;
}
