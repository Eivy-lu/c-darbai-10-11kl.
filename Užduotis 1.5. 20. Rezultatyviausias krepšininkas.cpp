#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    double pelnyti_taskai;
    double didziausi_balai = DBL_MIN;
    double taiklumas;

    cin >> n;

    for (double i = 1; i <= n; i++)
    {
        double dvitaskiu_mete;
        double dvitaskiu_pataike;
        double tritaskiu_mete;
        double tritaskiu_pataike;
        double baudu_mete;
        double baudu_pataike;

        cin >> dvitaskiu_mete >> dvitaskiu_pataike >> tritaskiu_mete >> tritaskiu_pataike >> baudu_mete >> baudu_pataike;

        pelnyti_taskai = (2 * dvitaskiu_pataike) + (3 * tritaskiu_pataike) + (1 * baudu_pataike);

        if (pelnyti_taskai > didziausi_balai)
        {
            didziausi_balai = pelnyti_taskai;
            taiklumas = (dvitaskiu_pataike + tritaskiu_pataike + baudu_pataike) / (dvitaskiu_mete + tritaskiu_mete + baudu_mete) * 100;
        }
    }

    cout << fixed << setprecision (2) <<"viso = "<< taiklumas << endl;

    return 0;
}
