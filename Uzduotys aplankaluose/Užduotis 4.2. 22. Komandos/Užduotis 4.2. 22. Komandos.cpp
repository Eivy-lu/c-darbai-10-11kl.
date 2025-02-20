#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &taskai, vector<int> &numeriai);
void rikiavimas(vector<int> &taskai, vector<int> &numeriai);
void spausdinimas(vector<int> &taskai, vector<int> &numeriai);

int main()

{
    vector <int> taskai;
    vector <int> numeriai;

    skaitymas(taskai, numeriai);
    rikiavimas(taskai, numeriai);
    spausdinimas(taskai, numeriai);

    return 0;
}

void spausdinimas(vector<int> &taskai, vector<int> &numeriai)
{
    ofstream fout("rez.txt");

    fout << numeriai.size()/2 <<endl;

    for (int i = 0; i < numeriai.size()/2; i++)
    {
        fout << numeriai[i] << " " << taskai [i] <<endl;
    }
}

void rikiavimas(vector<int> &taskai, vector<int> &numeriai)
{
    for (int i = 0; i < taskai.size(); i++)
    {
        for (int j = i+1; j < taskai.size(); j++)
        {
            if (taskai[i] < taskai[j])
            {
                swap(taskai[i], taskai[j]);
                swap(numeriai[i], numeriai[j]);
            }
        }
    }
}

void skaitymas(vector<int> &taskai, vector<int> &numeriai)
{
    ifstream sk("duom.txt");

    int n;

    sk >> n;

    for (int i = 0; i < n; i++)
    {
        int nr, task;
        sk >> nr >> task;

        numeriai.push_back(nr);
        taskai.push_back(task);
    }
}
