#include <bits/stdc++.h>

using namespace std;

struct Mokinys
{
    string vardas;
    int laikas;
};

void skaitymas(vector<Mokinys> &mokiniai);
int radimas(vector<Mokinys> &mokiniai);
void spausdinimas(vector<Mokinys> &mokiniai, int did);

int main()

{
    vector<Mokinys> mokiniai;

    skaitymas(mokiniai);
    int did = radimas(mokiniai);
    spausdinimas(mokiniai, did);

    return 0;
}

void spausdinimas(vector<Mokinys> &mokiniai, int did)
{
    ofstream fout("U2rez.txt");

    for(int i = 0; i < mokiniai.size(); i++)
    {
        if (did == mokiniai[i].laikas)
        {
            fout << mokiniai[i].vardas << " " << mokiniai[i].laikas/60 << " " << mokiniai[i].laikas%60 <<endl;
        }
    }
}

int radimas(vector<Mokinys> &mokiniai)
{
    int did = INT_MIN;///reference point
    for(int i = 0; i < mokiniai.size(); i++)
    {
        if(did < mokiniai[i].laikas)
        {
            did = mokiniai[i].laikas;
        }
    }
    return did;
}

void skaitymas(vector<Mokinys> &mokiniai)
{
    ifstream sk("U2.txt");

    int n; ///number of students
    sk >> n;

    mokiniai.resize(n); ///changing the size of the array to n

    for(int i = 0; i < n; i++)
    {
        sk.ignore(80, '\n');

        char temp[20+1]; ///+1 for the end mark

        ///from file(sk), take(get), into array(temp), 20 characters
        sk.get(temp,20+1);

        int val1, min1, val2, min2;
        sk >> val1 >> min1 >> val2 >> min2;

        mokiniai[i].vardas = temp;
        mokiniai[i].laikas = (val2 * 60 + min2) - (val1 * 60 + min1);
    }
}

