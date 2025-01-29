#include <bits/stdc++.h>

using namespace std;

int Calc(int a,int b, int op);

int main()

{
    int a;
    int b;
    int N;
    int op;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b >> op;

        cout << Calc (a, b, op)<<endl;
    }

    return 0;
}
int Calc(int a,int b, int op)
{
    if (op == 1)
    {
        return a + b;
    }
    else if (op == 2)
    {
        return a - b;
    }
    else if (op == 3)
    {
        return a * b;
    }
    else if (op == 4)
    {
        return a / b;
    }
    else if (op== 5)
    {
        return a % b;
    }
}
