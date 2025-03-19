#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector <int> &seka);
void radimas(vector <int> &seka, int &num1, int &num2, int &reiksme);
void spausdinimas(int &num1, int &num2, int &reiksme);

int main()

{
    vector <int> seka;
    int num1, num2, reiksme;

    skaitymas (seka);
    radimas(seka, num1, num2, reiksme);
    spausdinimas(num1, num2, reiksme);

    return 0;
}

void spausdinimas(int &num1, int &num2, int &reiksme)
{
    ofstream rez("rez.txt");
    rez << num1 <<" "<< num2 <<" "<< reiksme <<endl;
}

void radimas(vector <int> &seka, int &num1, int &num2, int &reiksme)
{
    for(int i = 0; i < seka.size(); i++)
    {
        for (int j = i+1; j < seka.size(); j++)
        {
            if (seka[i] == seka[j])
            {
                num1 = i + 1;
                num2 = j + 1;
                reiksme = seka[i];
            }
        }
    }
}

void skaitymas(vector <int> &seka)
{
    int n;
    ifstream sk("duom.txt");
    sk >> n;

    seka.resize(n);

    for (int i = 0; i < n; i++)
    {
        sk >> seka[i];
    }
}

