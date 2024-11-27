#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    int h, minu, s;

    cin >> n;
    cin >> h >> minu >> s;

    int visas_laikas_sekundemis = (h * 60 * 60) + (minu * 60) + s;

    for (int i = 1; i <= n; i++)
    {
        visas_laikas_sekundemis /= 3;
        h = visas_laikas_sekundemis / 3600;
        minu = (visas_laikas_sekundemis % 3600) / 60;
        s = visas_laikas_sekundemis % 60;

        cout << setw(2) << setfill('0') << h <<":" << setw(2) << setfill('0') << minu <<":"<< setw(2) << setfill('0') << s <<endl;
    }

    return 0;
}

