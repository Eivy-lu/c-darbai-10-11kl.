#include <bits/stdc++.h>

using namespace std;

int main()

{
    int J, P, R;

    cin >> J >> P >> R;

    int maxRiesutai = max(J, max(P, R));

    bool jonukasMax = (J == maxRiesutai);
    bool petriukasMax = (P == maxRiesutai);
    bool raseleMax = (R == maxRiesutai);

    if (jonukasMax && petriukasMax && raseleMax)
    {
        cout << "Jonukas, Petriukas ir Rasel�" << endl;
    }
    else if (jonukasMax && petriukasMax)
    {
        cout << "Jonukas ir Petriukas" << endl;
    }
    else if (jonukasMax && raseleMax)
    {
        cout << "Jonukas ir Rasel�" << endl;
    }
    else if (petriukasMax && raseleMax)
    {
        cout << "Petriukas ir Rasel�" << endl;
    }
    else if (jonukasMax)
    {
        cout << "Jonukas" << endl;
    }
    else if (petriukasMax)
    {
        cout << "Petriukas" << endl;
    }
    else if (raseleMax)
    {
        cout << "Rasel�" << endl;
    }

    return 0;
}



