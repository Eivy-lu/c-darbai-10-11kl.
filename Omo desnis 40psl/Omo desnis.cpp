#include <bits/stdc++.h>
using namespace std;

void sprendimas(int &bandymai, int &I, int &U, int &R);

int main()
{
    int bandymai;
    int I;
    int U;
    int R;

    sprendimas(bandymai, I, U, R);

    return 0;
}
void sprendimas(int &bandymai, int &I, int &U, int &R)
{
    ifstream sk("Duom.txt");
    ofstream rez("Rez.txt");
    sk >> bandymai;

    rez <<"Bandymu rezultatai"<<endl;
    rez <<"----------------------"<<endl;
    rez <<"  I       U       R   "<<endl;
    rez <<"----------------------"<<endl;

    for(int i = 1; i <= bandymai; i++)
    {
        sk >> I >> U >> R;

        if(I == 0)
        {
            I = U / R;
        }
        else if (U == 0)
        {
            U = I * R;
        }
        else if (R == 0)
        {
            R = U / I;
        }
        rez << I <<"      "<< U <<"      "<< R <<"      "<<endl;
    }
    rez <<"----------------------"<<endl;
}
