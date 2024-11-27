#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int p;
    int m;
    int miciaus_suestu_desreliu_sk = 0;
    int pifo_suestu_desreliu_sk = 0;

    cin >> n >> p >> m;

    for(int minu = 1; n > 0 ; minu++)
    {

        if(minu % 2 == 0)
        {
            if (n >= m)
            {
                n -= m;
                miciaus_suestu_desreliu_sk += m;
            }
            else
            {
                miciaus_suestu_desreliu_sk += n;
                n = 0;
            }

        }
        else if(minu % 2 != 0)
        {
            if (n >= p)
            {
                n -= p;
                pifo_suestu_desreliu_sk += p;
            }
            else
            {
                pifo_suestu_desreliu_sk += n;
                n = 0;
            }
        }
    }

    cout <<"Pifas "<< pifo_suestu_desreliu_sk <<endl;
    cout <<"Micius "<< miciaus_suestu_desreliu_sk <<endl;

    return 0;
}



