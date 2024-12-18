#include <bits/stdc++.h>

using namespace std;

void skaityk (ifstream&fd, vector<int> &a);
int skaiciavimas (vector<int> &a,  int p1, int p2);
int main()

{
    ifstream fd("duom.txt");
    ofstream fr ("rez.txt") ;

    int n;
    int p1, p2;

    fd >> n >>p1 >> p2;

    vector<int>a (n);

    skaityk (fd, a);
    int kiekis = skaiciavimas (a, p1, p2);

    fr << kiekis;

    return 0;
}
int skaiciavimas (vector<int> &a,  int p1, int p2)
{
    int kiekis = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > p1 && a [i] < p2)
        {
            kiekis ++;
        }
    }
    return kiekis;
}

void skaityk (ifstream&fd, vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        fd >> a [i];
    }
}



