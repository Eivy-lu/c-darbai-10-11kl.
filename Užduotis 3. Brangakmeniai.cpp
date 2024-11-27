#include <bits/stdc++.h>

using namespace std;

int main()

{
    string apsauga;
    int rb, mb;

    cin >> apsauga;
    cin >> rb >> mb;

    vector<int> raudonieji(rb);
    vector<int> melynieji(mb);

    for (int i = 0; i < rb; ++i)
    {
        cin >> raudonieji[i];
    }

    for (int i = 0; i < mb; ++i)
    {
        cin >> melynieji[i];
    }

    int max_raudonasis = 0, max_melynasis = 0;

    if (rb > 0)
    {
        max_raudonasis = *max_element(raudonieji.begin(), raudonieji.end());
    }

    if (mb > 0)
    {
        max_melynasis = *max_element(melynieji.begin(), melynieji.end());
    }

    int max_verte = 0;

    if (apsauga == "r")
    {
        max_verte = max_raudonasis;
    }
    else if (apsauga == "m")
    {
        max_verte = max_melynasis;
    }
    else if (apsauga == "rm" || apsauga == "mr")
    {
        max_verte = max_raudonasis + max_melynasis;
    }

    cout << max_verte << endl;

    return 0;
}
