#include <bits/stdc++.h>

using namespace std;

void skaitymas (vector<int long long> &skaiciai, int long long &n, int long long &kiekis);
void spausdinimas (vector<int long long> &skaiciai, int long long &n, int long long &kiekis);
int long long skaiciavimas (vector<int long long> &skaiciai, int long long &n, int long long &kiekis);

int main()

{
    int long long n;
    int long long kiekis = 0;
    vector<int long long> skaiciai;

    skaitymas (skaiciai, n, kiekis);
    skaiciavimas (skaiciai, n, kiekis);
    spausdinimas (skaiciai, n, kiekis);

    return 0;
}
void skaitymas (vector<int long long> &skaiciai, int long long  &n, int long long &kiekis)
{

    ifstream sk ("duom.txt");
    sk >> n;

    for (int long long i = 0; i < n; i++)
    {
        int temp;
        sk >> temp;

        skaiciai.push_back(temp);
    }
}
void spausdinimas (vector<int long long> &skaiciai, int long long &n, int long long &kiekis)
{
    ofstream rez ("rez.txt");

    if (n == 1)
    {
        rez <<"TAIP"<<endl;
    }
    else if (kiekis == n)
    {
        rez <<"TAIP"<<endl;
    }
    else if (kiekis != n)
    {
        rez <<"NE"<<endl;
    }
}
int long long skaiciavimas (vector<int long long> &skaiciai, int long long &n, int long long &kiekis)
{
    kiekis = 0;
    int long long j = skaiciai.size()-1;

    for (int long long i = 0; i < skaiciai.size(); i++)
    {
        if (skaiciai[i] == skaiciai[j])
        {
            kiekis ++;
        }
        j -= 1;
    }

    return kiekis;
}

