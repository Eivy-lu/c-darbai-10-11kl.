#include <bits/stdc++.h>

using namespace std;

void skaitymas (vector<int> &skaiciai);
void spausdinimas (vector<int> &skaiciai);
int skaiciavimas (vector<int> &skaiciai);

int main()

{
    int n;
    vector<int> skaiciai;

    skaitymas (skaiciai);
    spausdinimas (skaiciai);

    return 0;
}

int skaiciavimas (vector<int> &skaiciai)
{
    int kiekis = 0;

    for (auto m : skaiciai)
    {
        if (m < 100 && m > 9 && m / 10 == 3)
        {
            kiekis ++;
        }
    }
    return kiekis;
}

void skaitymas (vector<int> &skaiciai)
{
    int n;

    ifstream sk ("duom.txt");
    sk >> n;


    for (int i = 0; i < n; i++)
    {
        int temp;
        sk >> temp;

        skaiciai.push_back(temp);
    }

}

void spausdinimas (vector<int> &skaiciai)
{
    ofstream rez ("rez.txt");

    rez << skaiciavimas (skaiciai);

}

