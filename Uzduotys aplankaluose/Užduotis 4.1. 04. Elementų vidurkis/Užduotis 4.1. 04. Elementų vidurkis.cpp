#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [10];
    int suma = 0;
    double vidurkis;

    ifstream sk ("U1.txt");
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        suma += seka [i];
    }

    vidurkis = (double)suma / n;
    ofstream rez ("U1rez.txt");
    rez << fixed << setprecision (2) << vidurkis <<endl;

    return 0;
}
