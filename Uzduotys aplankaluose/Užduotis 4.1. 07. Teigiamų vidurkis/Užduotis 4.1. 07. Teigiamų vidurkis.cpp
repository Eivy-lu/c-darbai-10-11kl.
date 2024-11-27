#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [15];
    int suma = 0;
    double vidurkis;
    int teigiami = 0;
    int visi_neigiami = 0;

    ifstream sk ("U1.txt");
    sk >> n;

    ofstream rez ("U1rez.txt");

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        if (seka [i] > 0)
        {
            suma += seka [i];
            teigiami ++;
        }
        else
        {
            visi_neigiami ++;
            if (visi_neigiami == n)
            {
                rez <<"NO"<<endl;
                return 0;
            }
        }
    }

    vidurkis = (double)suma / teigiami;

    rez << fixed << setprecision (2) << vidurkis <<endl;

    return 0;
}
