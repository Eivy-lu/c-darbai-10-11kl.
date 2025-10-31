#include <bits/stdc++.h>
using namespace std;

void skaitymas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B);
void sprendimas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B);
void spausdinimas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B);

int main()
{
    int A_kiekis;
    int B_kiekis;
    vector<int> A;
    vector<int> B;

    skaitymas(A_kiekis, B_kiekis, A, B);
    sprendimas(A_kiekis, B_kiekis, A, B);
    spausdinimas(A_kiekis, B_kiekis, A, B);

    return 0;
}

void spausdinimas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B)
{
    ofstream rez("Rez.txt");
    for(int i = 0; i < (A_kiekis + B_kiekis); i++)
    {
        rez << A[i] << " ";
    }
}

void sprendimas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B)
{
    for(int i = 0; i < A_kiekis; i++)
    {
        for(int j = 0; j < B_kiekis; j++)
        {
            A.push_back(B[j]);
        }
    }

    for(int i = 0; i < (A_kiekis + B_kiekis); i++)
    {
        for(int j = i+1; j < (A_kiekis + B_kiekis); j++)
        {
            if(A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }
}

void skaitymas(int &A_kiekis, int &B_kiekis, vector<int> &A, vector<int> &B)
{
    ifstream sk("Duom.txt");
    sk >> A_kiekis;
    for(int i = 0; i < A_kiekis; i++)
    {
        int temp;
        sk >> temp;
        A.push_back(temp);
    }

    sk >> B_kiekis;
    for(int i = 0; i < B_kiekis; i++)
    {
        int temp;
        sk >> temp;
        B.push_back(temp);
    }
}
