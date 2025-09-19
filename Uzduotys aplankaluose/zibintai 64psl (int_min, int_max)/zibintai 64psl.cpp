#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &zibintai, int &zibintu_sk, int &naktys);
void sprendimas(vector<int> &zibintai, int &zibintu_sk, int &naktys);

int main()
{
    int zibintu_sk;
    int naktys;
    vector<int> zibintai;

    skaitymas(zibintai, zibintu_sk, naktys);
    sprendimas(zibintai, zibintu_sk, naktys);

    return 0;
}
void sprendimas(vector<int> &zibintai, int &zibintu_sk, int &naktys)
{
    int sviecia = INT_MIN;
    int nesviecia = INT_MIN;
    int naktis_daugiausiai;
    int naktis_maziausiai;
    int svies_max = 0;
    int svies_min = 0;
    for(int j  = 0; j < naktys; j++)
    {
        svies_max = 0;
        svies_min = 0;
        for(int i = 0; i < zibintu_sk; i++)
        {
            //krastus tikrina
            if (i == 0)
            {
                if (naktys % 2 == 0)
                {
                    zibintai[i] = 1;
                    svies_max++;
                }
                else if (naktys % 2 != 0)
                {
                    zibintai[i] = 0;
                    svies_min++;
                }
            }

            else if (i == zibintu_sk - 1)
            {
                if (naktys % 2 == 0)
                {
                    zibintai[i] = 1;
                    svies_max++;
                }
                else if (naktys % 2 != 0)
                {
                    zibintai[i] = 0;
                    svies_min++;
                }
            }

            //pirma taisykle
            else if(zibintai[i - 1] == 1 && zibintai[i + 1] == 1)
            {
                zibintai[i] = 0;
                svies_min++;
            }

            //antra taisykle
            else if((zibintai[i - 1] == 0 && zibintai[i + 1] == 1) || (zibintai[i - 1] == 1 && zibintai[i + 1] == 0))
            {
                zibintai[i] = 1;
                svies_max++;
            }
        }

        if (svies_max > sviecia)
        {
            sviecia == svies_max;
            naktis_daugiausiai = j;
        }
        if (svies_min > nesviecia)
        {
            nesviecia == svies_min;
            naktis_maziausiai = j;
        }
    }

    ofstream rez("Rez.txt");

    for(int i = 0; i < zibintu_sk; i++)
    {
        rez << zibintai[i];
    }

    rez << endl <<" Naktis, kai sviete daugiausiai: "<< naktis_daugiausiai << endl;
    rez <<" Naktis, kai sviete maziausiai: "<< naktis_maziausiai << endl;
}

void skaitymas(vector<int> &zibintai, int &zibintu_sk, int &naktys)
{
    ifstream sk("Duom.txt");
    sk >> zibintu_sk >> naktys;

    for(int i = 0; i < zibintu_sk; i++)
    {
        int temp; //laikinas
        sk >> temp;
        zibintai.push_back(temp);
    }
}
