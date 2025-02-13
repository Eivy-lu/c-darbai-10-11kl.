#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &temp, vector<int> &slegis, int &p0);
int radimas (vector<int> &temp, vector<int> &slegis, int &p0);
void spausdinimas(int ats);

int main()

{
    vector<int> temp;
    vector<int> slegis;
    int p0;

    skaitymas(temp, slegis, p0);
    spausdinimas(radimas(temp, slegis, p0));

    return 0;
}

void skaitymas(vector<int> &temp, vector<int> &slegis, int &p0)
{
    int n;
    cin >> n >> p0;

    temp.resize(n);
    slegis.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> slegis[i];
    }
}

int radimas (vector<int> &temp, vector<int> &slegis, int &p0)
{
    int kiek = 0;
    int did = 0;

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > 0 && slegis[i] > p0)
        {
            kiek++;
        }
        else
        {
            kiek = 0;
        }

        if (did < kiek)
        {
            did = kiek;
        }
    }
    return did;
}

void spausdinimas(int ats)
{
    cout << ats <<endl;
}


