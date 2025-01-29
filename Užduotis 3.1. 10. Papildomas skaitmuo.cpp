#include <bits/stdc++.h>

using namespace std;

int AddRDig(int n,int k);

int main()

{
    int N;
    int n;
    int k;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n >> k;

        cout << n <<" "<< k <<" "<<AddRDig(n,k)<<endl;
    }

    return 0;
}

int AddRDig(int n,int k)
{
    return n*10+k;
}

