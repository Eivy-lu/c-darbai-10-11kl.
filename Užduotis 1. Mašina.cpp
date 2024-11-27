#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{

    int N, C;
    cin >> N >> C;

    int x = 1, y = 1;

    for (int i = 0; i < C; i++) {
        char command;
        cin >> command;

        if (command == 'S' && x > 1) {
            x--;
        } else if (command == 'P' && x < N) {
            x++;
        } else if (command == 'R' && y < N) {
            y++;
        } else if (command == 'V' && y > 1) {
            y--;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}




