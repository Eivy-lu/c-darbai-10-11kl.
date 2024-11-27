#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int ats = (a / 10) % 10;


    if (ats % 2 == 0) {
        cout << "Taip" << endl;
    } else {
        cout << "Ne" << endl;
    }

    return 0;
}

