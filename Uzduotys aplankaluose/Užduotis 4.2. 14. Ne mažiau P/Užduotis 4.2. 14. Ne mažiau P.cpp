#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &seka, int &P);
int radimas(vector<int> &seka, int &P);
void spausdinimas(int suma);

int main()
{
    vector<int> seka;
    int P;

    skaitymas(seka, P);
    int suma = radimas(seka, P);
    spausdinimas(suma);

    return 0;
}

void spausdinimas(int suma)
{
    ofstream fout("U1rez.txt");

    if(suma == 0)
    {
        fout << "NE";
    }
    else
    {
        fout << suma;
    }

}

int radimas(vector<int> &seka, int &P)
{
    /*for(int i = 0; i < seka.size(); i++)
    {
        for(int j = i+1; j < seka.size(); j++)
        {
            if(seka[i] < seka[j])
            {
                swap(seka[i], seka[j]);
            }
        }
    } */

    int suma = 0;

    for(int i = 0; i < seka.size(); i++)
    {
        if(seka[i] >= P)
        {
            suma += seka[i];
        }
    }

    return suma;
}

void skaitymas(vector<int> &seka, int &P)
{
    ifstream fin("U1.txt");

    int n;
    fin >> n >> P;

    for(int i = 0; i < n; i++)
    {
        int sk;
        fin >> sk;

        seka.push_back(sk);
    }
}
