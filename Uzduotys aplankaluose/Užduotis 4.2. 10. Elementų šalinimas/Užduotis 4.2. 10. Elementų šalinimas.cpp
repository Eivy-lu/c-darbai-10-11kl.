#include <bits/stdc++.h>

using namespace std;

void skaitymas (vector<int> &seka, int &p);
void trynimas (vector<int> &seka, int &p);
void spausdinimas (vector<int> &seka, int &p);

int main()
{
    vector<int> seka;
    int p;

    skaitymas (seka, p);
    trynimas (seka, p);
    spausdinimas (seka, p);

    return 0;
}

///spausdinimas
void spausdinimas (vector<int> &seka, int &p)
{
    ofstream fout("rez.txt");

    if (seka.size() == 0)
    {
        fout <<"Neliko"<<endl;
    }
    else
    {
        for (int i = 0; i < seka.size(); i++)
        {
            if (i == 0)
            {
                fout << seka[i];
            }
            else fout <<" " << seka[i];
        }
    }
}

///trynimas
void trynimas (vector<int> &seka, int &p)
{
    for (int i = 0; i < seka.size(); i++)
    {
        if (seka[i] <= p)
        {
            seka.erase(seka.begin()+i);
            i--;
        }
    }
}

///skaitymas
void skaitymas (vector<int> &seka, int &p)
{
    int n;

    ifstream fin("duom.txt");
    fin >> n >> p;

    for (int i = 0; i < n ; i++)
    {
        int skaiciai;
        fin >> skaiciai;

        seka.push_back(skaiciai);
    }
}
