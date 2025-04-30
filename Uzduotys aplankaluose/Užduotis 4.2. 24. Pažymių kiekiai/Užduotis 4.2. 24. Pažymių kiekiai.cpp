#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &pazymiai);
int daugiausiai(vector<int> &pazymiai);
void spausdinimas(int daug, vector<int> pazymiai);

int main()
{
    vector <int> pazymiai(11);

    skaitymas(pazymiai);
    int daug = daugiausiai(pazymiai);
    spausdinimas(daug, pazymiai);

    return 0;
}

void spausdinimas(int daug, vector<int> pazymiai)
{
    ofstream fout("rez.txt");

    bool pirmas = true;

    for (int i = 1; i < pazymiai.size(); i++)
    {
        if (pazymiai[i] == daug)
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

int daugiausiai(vector<int> &pazymiai)
{
    int did = 0;
    for (int i = 1; i < pazymiai.size(); i++)
    {
        if (did < pazymiai[i])
        {
            did = pazymiai[i];
        }
    }
    return did;
}

void skaitymas(vector<int> &pazymiai)
{
    ifstream sk("duom.txt");

    int n;
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        int paz;
        sk >> paz;

        pazymiai[paz]++;
    }
}
