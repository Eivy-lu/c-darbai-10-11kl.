#include <bits/stdc++.h>
using namespace std;

void skaiciavimas(vector<int> &skaiciai);

int main()
{
    vector<int> skaiciai;
    skaiciavimas(skaiciai);

    return 0;
}
void skaiciavimas(vector<int> &skaiciai)
{
    ifstream sk("duom.txt");
    ofstream rez("rez.txt");

    int n;
    sk >> n;

    rez <<" ----------------------------------"<<endl;
    rez <<"     a           b            c     "<<endl;
    rez <<" ----------------------------------"<<endl;

    for(int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        int c = 0;

        sk >> a >> b >> c;

        if(a == 0)
        {
            a = sqrt((c * c) - (b * b));
        }
        else if(b == 0)
        {
            b = sqrt((c * c) - (a * a));
        }
        else if(c == 0)
        {
            c = sqrt((a * a) + (b * b));
        }

        rez <<setw(5)<< a <<setw(10)<< b <<setw(15)<< c <<endl;
    }
    rez <<" ----------------------------------"<<endl;
}
