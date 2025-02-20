#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &pataikymai);
int didziausias(vector<int> &pataikymai);
void spausdinimas(vector<int> &pataikymai, int &did);

int main()

{
    vector <int> pataikymai(10);//nuo 0 iki 9

    skaitymas(pataikymai);
    int did = didziausias(pataikymai);
    spausdinimas(pataikymai, did);

    return 0;
}
void skaitymas(vector<int> &pataikymai)
{
    int n;
    ifstream sk("duom.txt");

    sk >> n;

    for (int i = 0; i < n; i++)
    {
        int balas;
        sk >> balas;

        pataikymai[balas]++; //masyvo narys padideja vienu
    }
}
int didziausias(vector<int> &pataikymai)
{
    int did = 0;

    for (int i = 0; i < pataikymai.size(); i++)
    {
        if (did < pataikymai[i])
        {
            did = pataikymai[i];
        }
    }
    return did;
}
void spausdinimas(vector<int> &pataikymai, int &did)
{
    ofstream fout("rez.txt");

    bool pirmas = true;

    for (int i = 0; i < pataikymai.size(); i++)
    {
        if (did == pataikymai[i])
        {
            if (pirmas)
            {
                fout << i ;
                pirmas = false;
            }
            else fout <<"," << i ;
        }
    }
}

