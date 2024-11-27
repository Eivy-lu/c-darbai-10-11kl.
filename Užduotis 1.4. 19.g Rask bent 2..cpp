//Duoti trys skaièiai a,\ b,\ c. Nustatykite, ar bent du skaièiai yra nelyginiai ir neigiami.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

bool arNelyginisNeigiamas(int sk)
{
    return (sk % 2 != 0 && sk < 0);
}

int main()

{
    int a;
    int b;
    int c;

    cin >> a >> b >> c ;

    int ats = 0;
    if (arNelyginisNeigiamas(a)) ats++;
    if (arNelyginisNeigiamas(b)) ats++;
    if (arNelyginisNeigiamas(c)) ats++;

    if (ats >= 2) {
        cout << "Taip" << endl;
    } else {
        cout << "Ne" << endl;
    }

    return 0;
}



