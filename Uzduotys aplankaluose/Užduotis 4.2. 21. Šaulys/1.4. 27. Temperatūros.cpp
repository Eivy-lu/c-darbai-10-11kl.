#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &pataikymai, int &n);
int radimas(vector<int> &pataikymai, int &n);
void spausdinimas(int ats);

int main()

{
    vector <int> pataikymai;

    skaitymas(pataikymai, n);
    spausdinimas(radimas(temp, slegis, p0));


    return 0;
}
void skaitymas(vector<int> &pataikymai, int &n)
{
    int n;
    ifstream sk("duom.txt");

    sk >> n;

    pataikymai.resize(n);

    for (int i = 0; i < n; i++)
    {
        sk >> pataikymai[i];
    }
}
int radimas(vector<int> &pataikymai, int &n)
{
    int ats;

    for (int i = 0; i < pataikymai.size(); i++)
    {
        for (int j = pataikymai[i + 1]; j < pataikymai.size(); j++)
        {
            if (pataikymai[i] == pataikymai[j])
            {
                ats = i;;
            }
        }
        return ats;
    }
}
void spausdinimas(int ats)
{
    cout << ats <<endl;
}

