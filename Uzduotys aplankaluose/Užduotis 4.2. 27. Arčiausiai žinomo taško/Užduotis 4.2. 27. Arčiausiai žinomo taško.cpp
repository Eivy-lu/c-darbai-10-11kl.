#include <bits/stdc++.h>
using namespace std;

void skaitymas(vector<int> &x, vector<int> &y, vector<double> &atstumai);
void rikiavimas(vector<int> &x, vector<int> &y, vector<double> &atstumai);
void spausdinimas(vector<int> &x, vector<int> &y);

int main()

{
    vector<int> x;
    vector<int> y;
    vector<double> atstumai;

    skaitymas(x, y, atstumai);
    rikiavimas(x, y, atstumai);
    spausdinimas(x, y);

    return 0;
}
void spausdinimas(vector<int> &x, vector<int> &y)
{
    for(int i = 0; i < 3; i++)
    {
        cout << "(" << x[i] << "; " << y[i] << ")" <<endl;
    }
}
void rikiavimas(vector<int> &x, vector<int> &y, vector<double> &atstumai)
{
    for(int i = 0; i < x.size(); i++)
    {
        for(int j = 0; j < x.size()-1; j++)
        {
            if(atstumai[j] > atstumai[j+1])
            {
                swap(atstumai[j], atstumai[j+1]);
                swap(x[j], x[j+1]);
                swap(y[j], y[j+1]);
            }
        }
    }
}
void skaitymas(vector<int> &x, vector<int> &y, vector<double> &atstumai)
{
    int n;
    int x0, y0;

    cin >> n >> x0 >> y0;

    x.resize(n);
    y.resize(n);
    atstumai.resize(n);

    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        atstumai[i] = sqrt(pow(x[i]-x0, 2) + pow(y[i]-y0, 2));
    }
}

