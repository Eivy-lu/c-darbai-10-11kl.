#include <bits/stdc++.h>

using namespace std;

int main()

{
    ifstream fd ("U1.txt");
    int n;
    fd >> n;

    ofstream fr ("U1rez.txt");

    int seka [10];

    for (int i = 0; i < n; i++)
    {
            fd >> seka [i];
    }

    string ats = "NE";

    for (int i = 0; i < n - 2; i++)
    {
        if (seka [i] + 1 == seka [i + 1] && seka [i] + 2 == seka [i + 2])
        {
            ats = "TAIP";
        }
    }

    fr << ats;

    return 0;
}



