#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

bool arTemperaturaNeigiama(int sk)
{
    return (sk < 0);
}

bool arTemperaturaNuline(int sk)
{
    return (sk == 0);
}

using namespace std;

int main()
{
    int t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    int neigiama = 0, nuline = 0, teigiama = 0;

    if (arTemperaturaNeigiama(t1)) neigiama++;
    else if (arTemperaturaNuline(t1)) nuline++;
    else teigiama++;

    if (arTemperaturaNeigiama(t2)) neigiama++;
    else if (arTemperaturaNuline(t2)) nuline++;
    else teigiama++;

    if (arTemperaturaNeigiama(t3)) neigiama++;
    else if (arTemperaturaNuline(t3)) nuline++;
    else teigiama++;

    if (nuline == 3)
    {
        cout << "Oro nebuvo" << endl;
    }
    else if (neigiama == 3)
    {
        cout << "Tris dienas neigiama" << endl;
    }
    else if (teigiama == 3)
    {
        cout << "Tris dienas teigiama" << endl;
    }
    else if (neigiama == 2 && teigiama == 1)
    {
        cout << "Dvi dienas neigiama, viena - teigiama" << endl;
    }
    else if (teigiama == 2 && neigiama == 1)
    {
        cout << "Dvi dienas teigiama, viena - neigiama" << endl;
    }
    else if (teigiama == 1 && neigiama == 1 && nuline == 1)
    {
        cout << "Viena diena teigiama, viena - neigiama" << endl;
    }
    else if (nuline == 2 && neigiama == 1)
    {
        cout << "Viena diena neigiama" << endl;
    }
    else if (nuline == 2 && teigiama == 1)
    {
        cout << "Viena diena teigiama" << endl;
    }

    return 0;
}



