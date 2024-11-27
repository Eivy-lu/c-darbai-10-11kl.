#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [10];
    int is_viso_sk = 0;
    int suma;

    ifstream sk ("U1.txt");
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
    }

    ofstream rez ("U1rez.txt");
    rez << seka [0] + seka [n - 1] <<endl;

    return 0;
}





