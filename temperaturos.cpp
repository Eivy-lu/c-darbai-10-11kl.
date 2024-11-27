#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    int teigiamos = 0, neigiamos = 0;

    if (t1 > 0) teigiamos++;
    else if (t1 < 0) neigiamos++;

    if (t2 > 0) teigiamos++;
    else if (t2 < 0) neigiamos++;

    if (t3 > 0) teigiamos++;
    else if (t3 < 0) neigiamos++;

    if (teigiamos > 0 && neigiamos > 0)
    {
        cout << teigiamos << " diena(-os) teigiama(-os), " << neigiamos << " diena(-os) neigiama(-os)" << endl;
    }
    else if (teigiamos > 0)
    {
        cout << teigiamos << " diena(-os) teigiama(-os)" << endl;
    }
    else if (neigiamos > 0)
    {
        cout << neigiamos << " diena(-os) neigiama(-os)" << endl;
    }
    else
    {
        cout << "Oro nebuvo" << endl;
    }

    return 0;
}



