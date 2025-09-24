#include <bits/stdc++.h>
using namespace std;

//void skaitymas(vector<int> raudonos,vector<int> geltonos, vector<int> melynos, vector<int> juodos, string = "r", string = "g", string = "m", string = "j")

int main()
{
    vector<int> raudonos;
    vector<int> geltonos;
    vector<int> melynos;
    vector<int> juodos;

    int korteliu_sk;

    char r = 'R';
    char g = 'G';
    char m = 'M';
    char j = 'J';

    ifstream sk("Duom.txt");
    sk >> korteliu_sk;

    for(int i = 0; i < korteliu_sk; i++)
    {
        int temp;
        sk >> temp;

        if(temp == r)
        {
            raudonos.push_back(temp);
        }
        else if(temp == g)
        {
            geltonos.push_back(temp);
        }
        else if(temp == m)
        {
            melynos.push_back(temp);
        }
        else if(temp == j)
        {
            juodos.push_back(temp);
        }

    }

    return 0;
}
