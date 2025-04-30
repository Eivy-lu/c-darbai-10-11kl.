#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &menesiai);
int daugiausiai(vector<int> &menesiai);
void spausdinimas(int daug, vector<int> &menesiai);

int main()
{
    vector <int> menesiai(13);

    skaitymas(menesiai);
    int daug = daugiausiai(menesiai);
    spausdinimas(daug, menesiai);

    return 0;
}

void spausdinimas(int daug, vector<int> &menesiai)
{
    ofstream fout("rez.txt");

    bool pirmas = true;

    for (int i = 1; i < menesiai.size(); i++)
    {
        if (menesiai[i] == daug)
        {
            if (pirmas)
            {
                fout << i ;
                pirmas = false;
            }
            else fout << "," << i;
        }
    }
}

int daugiausiai(vector<int> &menesiai)
{
    int did = 0;
    for (int i = 1; i < menesiai.size(); i++)
    {
        if (did < menesiai[i])
        {
            did = menesiai[i];
        }
    }
    return did;
}

void skaitymas(vector<int> &menesiai)
{
    ifstream sk("duom.txt");

    int n;
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        int temp, menuo;
        sk >> temp >> menuo;

        menesiai[menuo]++;
    }
}
