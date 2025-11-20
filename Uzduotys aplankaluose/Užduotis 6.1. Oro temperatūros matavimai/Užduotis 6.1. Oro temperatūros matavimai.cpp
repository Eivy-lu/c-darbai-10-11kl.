#include <bits/stdc++.h>

using namespace std;

struct menuo
{
    string pav;
    double vidurkis;
};

void skaitymas(vector<menuo> &menesiai);
void spausdinimas(vector<menuo> &menesiai);

int main()
{
    vector<menuo>menesiai;

    skaitymas(menesiai);
    spausdinimas(menesiai);

    return 0;
}
void spausdinimas(vector<menuo> &menesiai)
{
    ofstream rez("Rezultatai.txt");

    double sum = 0;

    for(int i = 0; i < menesiai.size(); i++)
    {
        sum += menesiai[i].vidurkis;
        rez << menesiai[i].pav <<" " << fixed << setprecision(2) << menesiai[i].vidurkis <<endl;
    }
    rez <<"Bendras matavimø vidurkis: "<< fixed << setprecision(2) << sum/menesiai.size() << endl;
}

void skaitymas(vector<menuo> &menesiai)
{
    ifstream sk("Duomenys.txt");
    int n;
    int k;

    sk >> n >> k;

    menesiai.resize(n);

    for(int i = 0; i < n ; i++)
    {
        double suma = 0;
        sk >> menesiai[i].pav;
        for(int j = 0; j < k; j++)
        {
            double temp;
            sk >> temp;
            suma += temp;
        }
        menesiai[i].vidurkis = suma / k;
    }
}


