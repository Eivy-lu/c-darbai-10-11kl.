#include <bits/stdc++.h>

using namespace std;

void skaitymas(vector<int> &seka);
int radimas(vector<int> &seka);
void spausdinimas(int did);

int main()

{
    vector<int> seka;

    skaitymas(seka);
    spausdinimas(radimas(seka));

    return 0;
}
void skaitymas(vector<int> &seka)
{
    int n;
    cin >> n;

    seka.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> seka[i];
    }
}
int radimas(vector<int> &seka)
{
    int did = 0;
    for (int i = 0; i < seka.size(); i++)
    {
        for (int j = i+1; j < seka.size(); j++)
        {
            if (seka[i] == -seka[j] && abs(seka[i]) > did)
            {
                did = abs(seka[i]);
            }
        }
    }
    return did;
}
void spausdinimas(int did)
{
    if (did == 0)
    {
        cout <<"NO";
    }
    else cout << did <<endl;
}
