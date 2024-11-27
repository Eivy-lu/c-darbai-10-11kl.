#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int kiekis;
    int isoreje;
    int viduje;


    cin >> kiekis;

    int total = pow(kiekis, 3);


    if (kiekis > 2) {
        viduje = pow(kiekis - 2, 3);
    } else {
        viduje = 0;
    }

    isoreje = total - viduje;

    cout << isoreje << " " << viduje << endl;

    return 0;
}


