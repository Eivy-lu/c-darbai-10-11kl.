#include <bits/stdc++.h>
using namespace std;

int main()
{
    int varztu_sk;
    vector<int> varztai;
    int verzliu_sk;
    vector<int> verzles;

    ifstream sk("Duom.txt");
    ofstream rez("Rez.txt");

    sk >> varztu_sk;
    for (int i = 0; i < varztu_sk; i++)
    {
        int temp;
        sk >> temp;
        varztai.push_back(temp);
    }

    sk >> verzliu_sk;
    for (int i = 0; i < verzliu_sk; i++)
    {
        int temp;
        sk >> temp;
        verzles.push_back(temp);
    }

    int varztu_kiekis[21] = {0};
    int verzliu_kiekis[21] = {0};

    for (int i = 0; i < varztai.size(); i++)
    {
        varztu_kiekis[varztai[i]]++;
    }

    for (int i = 0; i < verzles.size(); i++)
    {
        verzliu_kiekis[verzles[i]]++;
    }

    bool reikia_varztu = false;
    bool reikia_verzliu = false;


    for (int i = 2; i <= 20; i++)
    {
        if (verzliu_kiekis[i] > varztu_kiekis[i])
        {
            reikia_varztu = true;
            break;
        }
    }

    if (reikia_varztu)
    {
        rez << "Reikalingi varztai:" << endl;
        for (int i = 2; i <= 20; i++)
        {
            if (verzliu_kiekis[i] > varztu_kiekis[i])
            {
                rez << (verzliu_kiekis[i] - varztu_kiekis[i]) << " " << i << endl;
            }
        }
    }
    else
    {
        rez << "Varztu nereikia" << endl;
    }

    for (int i = 2; i <= 20; i++)
    {
        if (varztu_kiekis[i] > verzliu_kiekis[i])
        {
            reikia_verzliu = true;
            break;
        }
    }

    if (reikia_verzliu)
    {
        rez << "Reikalingos verzles:" << endl;
        for (int i = 2; i <= 20; i++)
        {
            if (varztu_kiekis[i] > verzliu_kiekis[i])
            {
                rez << (varztu_kiekis[i] - verzliu_kiekis[i]) << " " << i << endl;
            }
        }
    }
    else
    {
        rez << "Verzliu nereikia" << endl;
    }

    return 0;
}
