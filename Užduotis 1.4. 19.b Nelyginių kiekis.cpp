#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int Kiekis = 0;

    cin >> a >> b >> c;


    if (a % 2 == 1)
    {
        Kiekis++;
    }

    if (b % 2 == 1)
    {
        Kiekis++;
    }


    if (c % 2 == 1)
    {
        Kiekis++;
    }

    cout <<"Nelyginiø skaièiø kiekis yra"<< Kiekis << endl;

    return 0;
}


