#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &skaiciai, int &sk_kiekis);
void sprendimas(vector<int> &skaiciai, int &sk_kiekis, int &kiekis);
void spausdinimas(vector<int> &skaiciai, int &sk_kiekis, int &kiekis);

int main()
{
    vector<int> skaiciai;
    int sk_kiekis;
    int kiekis = 0;

    skaitymas(skaiciai, sk_kiekis);
    sprendimas(skaiciai, sk_kiekis, kiekis);
    spausdinimas(skaiciai, sk_kiekis, kiekis);

    return 0;
}

void spausdinimas(vector<int> &skaiciai, int &sk_kiekis, int &kiekis)
{
    ofstream rez("rez.txt");
    if(kiekis == sk_kiekis)
    {
        rez <<"TAIP"<<endl;
    }
    else rez <<"NE"<<endl;
}

void sprendimas(vector<int> &skaiciai, int &sk_kiekis, int &kiekis)
{
    int a = sk_kiekis - 1;
    for(int i = 0; i < sk_kiekis; i++)
    {
        if(skaiciai[i] == skaiciai[a])
        {
            kiekis++;
        }
        a--;
    }
}

void skaitymas(vector<int> &skaiciai, int &sk_kiekis)
{
    ifstream sk("duom.txt");
    sk >> sk_kiekis;

    for(int i = 0; i < sk_kiekis; i++)
    {
        int temp;
        sk >> temp;
        skaiciai.push_back(temp);
    }
}
