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
    for(int i = 0; i < varztu_sk; i++)
    {
        int temp;
        sk >>temp;
        varztai.push_back(temp);
    }

    sk >> verzliu_sk;
    for(int i = 0; i < verzliu_sk; i++)
    {
        int temp;
        sk >>temp;
        verzles.push_back(temp);
    }

    for(int i = 0; i < varztu_sk; i++)
    {
        for(int j = 0; j < verzliu_sk; j++)
        {
            if(varztai[i] == verzles[j])
            {
                varztai.erase(varztai.begin() + i);
                verzles.erase(verzles.begin() + j);
            }
        }
    }

    int kiekis_varztu = 0;
    rez <<"Reikalingi varztai: "<< endl;

    for(int i = 2; i <= 20; i++)
    {
        int skaicius;
        for(int j = 0; j < varztu_sk; j++)
        {
            skaicius = varztai[i];
            if(skaicius == varztai[i+1])
            {
                kiekis_varztu++;
            }
        }
        rez << kiekis_varztu <<" "<< skaicius << endl;
    }

    int kiekis_verzliu = 0;
    rez <<"Reikalingos verzles: "<< endl;

    for(int i = 2; i <= 20; i++)
    {
        int skaicius;
        for(int j = 0; j < verzliu_sk; j++)
        {
            skaicius = verzles[i];
            if(skaicius == verzles[i+1])
            {
                kiekis_verzliu++;
            }
        }
        rez << kiekis_verzliu <<" "<< skaicius <<endl;
    }

    return 0;
}
