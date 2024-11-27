#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [10];
    int suma = 0;

    ifstream sk ("U1.txt");
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        suma += seka [i];
    }

    ofstream rez ("U1rez.txt");
    rez << suma <<endl;

    return 0;
}
