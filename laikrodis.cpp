#include <bits/stdc++.h>

using namespace std;

int main()

{
    int val1, val2;
    int minu1, minu2;
    int s1, s2;
    int viskas_sekundemis;
    int ats;

    cin >> val1 >> minu1 >> s1;

    viskas_sekundemis = (val1 * 60 * 60) + (minu1 * 60) + s1;
    ats = viskas_sekundemis - 1;

    val2 = ats / 60 / 60;
    minu2 = (ats / 60) - val2 * 60;
    s2 = ats - (minu2 * 60) - (val2 * 60 * 60);

    cout <<val2<<" "<<minu2<<" "<<<<" "<<s2<< endl;

    return 0;
}



