#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis);
void rikiavimas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis);
void spausdinimas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis);

int main()
{
    vector <int> seka_A;
    vector <int> seka_B;
    int aKiekis;
    int bKiekis;

    skaitymas(seka_A, seka_B, aKiekis, bKiekis);
    rikiavimas(seka_A, seka_B, aKiekis, bKiekis);
    spausdinimas(seka_A, seka_B, aKiekis, bKiekis);

    return 0;
}
void spausdinimas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis)
{
    ofstream rez("rez.txt");
    for(int i = 0; i < aKiekis; i++)
    {
        rez << seka_A[i] <<" ";
    }
}

void rikiavimas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis)
{
    for(int j = 0; j < bKiekis; j++)
    {
        int b = seka_B[j];
        for(int i = 0; i < seka_A.size(); i++)
        {
            if(b % seka_A[i] == 0)
            {
                seka_A.insert(seka_A.begin() + i + 1, b);
                i++;
            }
        }
    }
    aKiekis = seka_A.size();
}

void skaitymas(vector <int> &seka_A, vector <int> &seka_B, int &aKiekis, int &bKiekis)
{
    ifstream sk("Duom.txt");

    sk >> aKiekis;
    for(int i = 0; i < aKiekis; i++)
    {
        int temp;
        sk >> temp;
        seka_A.push_back(temp);
    }

    sk >> bKiekis;
    for(int i = 0; i < bKiekis; i++)
    {
        int temp;
        sk >> temp;
        seka_B.push_back(temp);
    }
}
