#include <bits/stdc++.h>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()

{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    if (a == 0 || b == 0 || c == 0)
    {
        cout << "Blogi pradiniai duomenys" << endl;
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Blogi pradiniai duomenys" << endl;
        return 0;
    }

    if (a == b && b == c)
    {
        cout << "Trikampis yra lygiakraðtis" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Trikampis yra lygiaðonis" << endl;
    }
    else
    {
        cout << "Trikampis yra ávairiakraðtis" << endl;
    }

    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Trikampio plotas = " << fixed << setprecision(2) << area << endl;

    return 0;
}



