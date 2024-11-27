#include <bits/stdc++.h>

using namespace std;

int main()

{
    int N;
    int maziausias_narys = INT_MAX;
    int didziusias_narys = INT_MIN;
    int eiles_nr_maziausio = 0;
    int eiles_nr_didziausio = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int naturalus_sk;
        cin >> naturalus_sk;

        if (naturalus_sk < maziausias_narys)
        {
            maziausias_narys = naturalus_sk;
            eiles_nr_maziausio = i;
        }
        else if (naturalus_sk >= didziusias_narys)
        {
            didziusias_narys = naturalus_sk;
            eiles_nr_didziausio = i;
        }
    }

    cout << maziausias_narys <<" "<< eiles_nr_maziausio <<endl;
    cout << didziusias_narys <<" "<< eiles_nr_didziausio <<endl;

    return 0;
}



