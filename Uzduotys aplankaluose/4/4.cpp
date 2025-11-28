#include <bits/stdc++.h>
using namespace std;

void skaiciavimas(int &did_1, int &did_2);

int main()
{
    int did_1;
    int did_2;

    skaiciavimas(did_1, did_2);

    ofstream rez("rez.txt");

    if(did_1 > did_2)
    {
        rez << did_1 <<endl;
    }
    else
    {
        rez << did_2 <<endl;
    }

    return 0;
}
void skaiciavimas(int &did_1, int &did_2)
{
    ifstream sk("duom.txt");

    int a;
    int b;
    int c;
    int d;

    sk >> a >> b >> c >> d;

    if(a > b)
    {
        did_1 = a;
    }
    else
    {
        did_1 = b;
    }

    if(c > d)
    {
        did_2 = c;
    }
    else
    {
        did_2 = d;
    }
}
