#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int h;
    int mokinio_ugis;
    int mokiniu_ugiu_vircianciu_h_sk = 0;

    cin >> n >> h;

    for(int i = 1; i <= n; i++)
    {
        cin >> mokinio_ugis;
        if (mokinio_ugis > h)
        {
            mokiniu_ugiu_vircianciu_h_sk ++;
        }
    }

    cout <<mokiniu_ugiu_vircianciu_h_sk<<endl;


    return 0;
}
