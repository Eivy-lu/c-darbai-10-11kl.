#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int kiek=0;

    cin>>n;

    for(int i = 1; i <= 31; i+=n)
    {
        cout<<i<<endl;

        if(i >= 15 && i <= 28 && i != 25)
        {
            kiek++;
        }
    }
    cout << "Nemokamø apsilankymø kiekis:" << kiek;

    return 0;
}



