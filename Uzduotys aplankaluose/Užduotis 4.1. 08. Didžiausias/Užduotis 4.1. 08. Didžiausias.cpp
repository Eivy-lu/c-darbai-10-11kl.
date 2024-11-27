#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int seka [15];
    int didziausias = INT_MIN;

    ifstream sk ("U1.txt");
    sk >> n;

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        if (seka [i] > didziausias)
        {
            didziausias = seka [i];
        }
    }

    ofstream rez ("U1rez.txt");
    rez << didziausias <<endl;

    return 0;
}
