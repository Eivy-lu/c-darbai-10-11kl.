#include <bits/stdc++.h>

using namespace std;

void skaitymas(int &n, int masyvas[]);
void spausdinimas(int &n, int masyvas[]);

int main()
{
    int masyvas[10];
    int n;

    skaitymas(n, masyvas);
    spausdinimas(n, masyvas);

    return 0;
}

void spausdinimas(int &n, int masyvas[])
{
    ofstream fr("U1rez.txt");

    int izulus = 10000;

    for(int i = 1; i < n-1; i++)
    {
       if(masyvas[i] > masyvas[i+1] && masyvas[i] > masyvas[i-1] && masyvas[i] < izulus && masyvas[i] > 0)
       {
           izulus = masyvas [i];
       }
    }

   if (izulus == 10000)
   {
       fr << "NO";
   }
   else fr << izulus;
}


void skaitymas(int &n, int masyvas[])
{
    ifstream fd("U1.txt");

    fd >> n;

    for(int i = 0; i < n; i++)
    {
        fd >> masyvas[i];
    }

}
