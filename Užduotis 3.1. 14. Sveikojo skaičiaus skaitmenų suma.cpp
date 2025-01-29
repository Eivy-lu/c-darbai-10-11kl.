#include <bits/stdc++.h>

using namespace std;

int SkSum (int n);

int main()

{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
      int sk;
      cin >> sk;

      cout << sk <<" "<<SkSum(sk)<<endl;
  }

  return 0;
}
int SkSum (int n)
{
    int suma = 0;
    while (n > 0)
    {
        suma += n%10;
        n /= 10;
    }

    return suma;
}
