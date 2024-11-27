#include <bits/stdc++.h>

using namespace std;

void Rikiuoti(int A[], int n)
{
    int tarpinis;
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(A[i] > A[j])
            {
                tarpinis = A[i];
                A[i] = A[j];
                A[j] = tarpinis;
            }
        }
    }

}

int main()

{
    int n;
    int seka [15];
    int didziausias = INT_MIN;
    int netinka = 0;
    int pozicija;

    ifstream sk ("U1.txt");
    sk >> n;

    ofstream rez ("U1rez.txt");

    for (int i = 0; i < n; i++)
    {
        sk >> seka [i];
        Rikiuoti(seka, n);
    }

    rez << seka [0] ;
    for (int i = 1; i < n; i++)
    {
        rez <<", "<< seka [i];
    }

    return 0;
}
