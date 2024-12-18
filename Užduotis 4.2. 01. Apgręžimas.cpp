#include <bits/stdc++.h>

using namespace std;

void skaityk (ifstream&fd, vector<int> &a);
void apgrezk (vector<int> &a);
void spausdink (vector<int> &a);

int main()

{
    ifstream fd("duom.txt");

    int n;

    fd >> n;

    vector<int>a (n);

    skaityk (fd, a);
    apgrezk (a);
    spausdink (a);

    return 0;
}
void spausdink (vector<int> &a)
{
    ofstream fr ("rez.txt") ;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            fr << a[i];
        }
        else
        {
            fr << " " << a[i];
        }
    }
}

void apgrezk (vector<int> &a)
{
    for (int i = 0; i <a.size()/2; i++)
    {
        swap (a[i], a[a.size()-1-i]);
    }
}

void skaityk (ifstream&fd, vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        fd >> a [i];
    }
}



