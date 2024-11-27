#include <bits/stdc++.h>

using namespace std;

int main()

{
    double N;
    double m;//mase
    double v;//turis
    double maziausias_tankis = DBL_MAX;
    double didziausias_tankis = DBL_MIN;
    double eiles_nr_maz = -1;
    double eiles_nr_didz = -1;
    double suma = 0.0;


    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        double tankis;


        cin >> m >> v;

        tankis = (m) / v;
        suma += tankis;

        if (tankis < maziausias_tankis)
        {
            maziausias_tankis = tankis;
            eiles_nr_maz = i;
        }

        else if (tankis > didziausias_tankis)
        {
            didziausias_tankis = tankis;
            eiles_nr_didz = i;
        }
    }

    double vidutinis_tankis = suma / N;

    cout <<"Maşiausio tankio detalës numeris: "<< eiles_nr_maz <<endl;
    cout <<"Didşiausio tankio detalës numeris: "<< eiles_nr_didz <<endl;
    cout <<"Vidutinis detalës tankis: "<< fixed << setprecision (3)<< vidutinis_tankis <<endl;

    return 0;
}



