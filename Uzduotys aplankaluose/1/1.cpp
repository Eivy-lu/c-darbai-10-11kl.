#include <bits/stdc++.h>
using namespace std;

void skaiciavimas(vector<int> &skaiciai);

int main()
{
    vector<int> skaiciai;
    skaiciavimas(skaiciai);

    return 0;
}
void skaiciavimas(vector<int> &skaiciai)
{
    ifstream sk("duom.txt");
    ofstream rez("rez.txt");

    int n;
    sk >> n;
    rez <<" ----------------------------------"<<endl;
    rez <<"      Suma            Sandauga     "<<endl;
    rez <<" ----------------------------------"<<endl;

    for(int i = 0; i < n; i++)
    {
        int suma = 0;
        int sandauga = 1;
        for(int j = 0; j < 3; j++)
        {
            int temp;
            sk >> temp;
            suma += temp;
            sandauga = sandauga * temp;
        }
        rez <<setw(10)<< suma <<setw(17)<< sandauga <<endl;
    }
    rez <<" ----------------------------------"<<endl;
}
