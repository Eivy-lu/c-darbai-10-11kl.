#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()

{
    int s; //kartu
    int k;
    int m;
    int x;
    int Rasa, Rita, Rima;

    cin >> s >> k >> m;

    s - ((x + k) + ((x + x + k) - m )) - x = 0;
    Rasa = x;
    Rita = x + k;
    Rima = (Rasa + Rita) - m;

    cout << "Rasa: " << Rasa << endl;
    cout << "Rita: " << Rita << endl;
    cout << "Rima: " << Rima << endl;

    return 0;
}



