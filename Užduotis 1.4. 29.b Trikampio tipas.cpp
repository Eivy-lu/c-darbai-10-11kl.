/*Nustatykite, ar ið trijø atkarpø, kuriø ilgiai $a,\ b\ $ir$\ c$, galima sudaryti trikampá. Jeigu taip, tai patikrinkite, ar trikampis lygiaðonis, lygiakraðtis ar ávairiakraðtis.
Apskaièiuokite trikampio plotà pagal Herono formulæ. p - pusperimetris. Programoje turi bûti apsauga nuo neigiamø ilgiø ávedimo. Atsakymà pateikite ðimtøjø tikslumu.*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{
    double a;
    double b;
    double c;
    double s;
    double p;
    double Perimetras;

    cin >> a >> b >> c ;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout <<"Blogi pradiniai duomenys"<<endl;
        a = 0;
        b = 0;
        c = 0;
    }

    if (a != 0 && b != 0 && c != 0)
    {
        if (a == b && a == c && b == c)
        {
            Perimetras = a + b + c;
            p = Perimetras / 2.0;
            s = sqrt (p * (p - a) * (p - b) * (p - c));

            if (p * (p - a) * (p - b) * (p - c) > 0 )
            {
                cout <<"Trikampis yra lygiakraštis"<<endl;
                cout <<"Trikampio plotas = "<< fixed << setprecision(2) << s << endl;

            }
            else
            {
                cout <<"Negalima sudaryti trikampio"<<endl;
            }
        }
        else if (a != b && a != c && c != b)
        {
            Perimetras = a + b + c;
            p = Perimetras / 2.0;
            s = sqrt (p * (p - a) * (p - b) * (p - c));
            if (p * (p - a) * (p - b) * (p - c) > 0 )
            {
                cout <<"Trikampis yra įvairiakraštis"<<endl;
                cout <<"Trikampio plotas = "<< fixed << setprecision(2) << s << endl;

            }
            else
            {
                cout <<"Negalima sudaryti trikampio"<<endl;
            }
        }

        else if (a == b || b == c || a == c)
        {
            Perimetras = a + b + c;
            p = Perimetras / 2.0;
            s = sqrt (p * (p - a) * (p - b) * (p - c));

            if (p * (p - a) * (p - b) * (p - c) > 0 )
            {
                cout <<"Trikampis yra lygiašonis"<<endl;
                cout <<"Trikampio plotas = "<< fixed << setprecision(2) << s << endl;

            }
            else
            {
                cout <<"Negalima sudaryti trikampio"<<endl;
            }
        }
    }
    return 0;
}



