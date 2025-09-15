#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies);
void sprendimas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies);
void spausdinimas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies);

int main()
{
    int zibintu_sk;
    int naktu_sk;
    int daugiausiai_svies = INT_MIN;
    int maziausiai_svies = INT_MAX;
    vector<int> zibintai;

    skaitymas(zibintai, zibintu_sk, naktu_sk, daugiausiai_svies, maziausiai_svies);
    sprendimas(zibintai, zibintu_sk, naktu_sk, daugiausiai_svies, maziausiai_svies);
    spausdinimas(zibintai, zibintu_sk, naktu_sk, daugiausiai_svies, maziausiai_svies);

    return 0;
}
void spausdinimas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies)
{
    ofstream rez("Rez.txt");
    for(int i = 0; i < zibintu_sk; i++)
    {
        rez << zibintai[i];
    }

    rez <<endl<<"Naktis, kai sviete daugiausiai: "<< daugiausiai_svies <<endl;
    rez <<"Naktis, kai sviete maziausiai: "<< maziausiai_svies<<endl;
}

void sprendimas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies)
{
    int sviecia = 0;
    for(int i = 0; i < naktu_sk; i++)
    {
        if(sviecia > daugiausiai_svies)
        {
            daugiausiai_svies = i;
        }
        if(sviecia < maziausiai_svies)
        {
            maziausiai_svies = i;
        }
        //maziausiai ir saugiausiai svies

        for(int j = 0; j < zibintu_sk; j++)
        {
            if(((j > 0) && (j < zibintu_sk - 1)) && ((zibintai[j - 1] == 1) && (zibintai[j + 1] == 1))) //pirma taisykle
            {
                zibintai[j] = 0;
            }

            else if(((j > 0) && (j < zibintu_sk - 1)) && ((zibintai[j - 1] == 1 && zibintai[j + 1] == 0) || (zibintai[j - 1] == 0 && zibintai[j + 1] == 1))) //antra taisykle
            {
                zibintai[j] = 1;
                sviecia++;
            }

            else if(i % 2 == 0) //trecia taisykle
            {
                zibintai[j] = 1;
                sviecia++;
            }
            else if(i % 2 == 1)
            {
                zibintai[j] = 0;
            }
        }
    }
}

void skaitymas(vector<int> &zibintai, int &zibintu_sk, int &naktu_sk, int &daugiausiai_svies, int &maziausiai_svies)
{
    ifstream sk("Duom.txt");
    sk >> zibintu_sk >> naktu_sk;
    int temp; //temporary

    for(int i = 0; i < zibintu_sk; i++)
    {
        sk >> temp;
        zibintai.push_back(temp); //is temporary --> main
    }
}
