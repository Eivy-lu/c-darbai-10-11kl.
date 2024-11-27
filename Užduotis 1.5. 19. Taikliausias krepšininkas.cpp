#include <bits/stdc++.h>

using namespace std;

int main()

{
    double n;
    double pelnyti_taskai;
    double didziausi_balai = INT_MIN;

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
        }
    }

    cout << didziausi_balai << endl;

    return 0;
}
