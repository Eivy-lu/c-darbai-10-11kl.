#include <bits/stdc++.h>
using namespace std;

int main()
{
    int gucikai = 0;
    int mucikai = 0;
    int fucikai = 0;
    int guciku_gyvena;
    int muciku_gyvena;
    int fuciku_gyvena;
    int n;
    int a = 10;

    ifstream sk ("Duom.txt");
    sk >> guciku_gyvena;
    sk >> muciku_gyvena;
    sk >> fuciku_gyvena;

    if (guciku_gyvena > 500 || muciku_gyvena > 500 || fuciku_gyvena > 500)
    {
        return 0;
    }

    while (guciku_gyvena > 0)
    {
        int sum = 0;
        for (int i = 1; i <= 3; i++)
        {
            sk >> n;
            sum += n;

            if (n > 20)
            {
                return 0;
            }
        }
        if (sum > guciku_gyvena)
        {
            break;
        }
        guciku_gyvena -= sum;
        gucikai++;
    }
    while (muciku_gyvena > 0)
    {
        int sum = 0;
        for (int i = 1; i <= 3; i++)
        {
            sk >> n;
            sum += n;

            if (n > 20)
            {
                return 0;
            }
        }
        if (sum > muciku_gyvena)
        {
            break;
        }
        muciku_gyvena -= sum;
        mucikai++;
    }

    while (fuciku_gyvena > 0)
    {
        int sum = 0;
        for (int i = 1; i <= 3; i++)
        {
            sk >> n;
            sum += n;

            if (n > 20)
            {
                return 0;
            }
        }
        if (sum > fuciku_gyvena)
        {
            break;
        }
        fuciku_gyvena -= sum;
        fucikai++;
    }

    ofstream ras("rez.txt");
    ras << gucikai <<" "<< mucikai <<" "<< fucikai <<" "<< endl;

    return 0;
}


