#include  <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

void Skaityti(int A[], int &n, int &k);
void TikrintiIrasyti(int A[], int n, int k, int B[], int C[]);
int Sum(int A[], int n);
int DidNr(int C[], int k);
int MazNr(int C[], int k);
int main()
{
    int A[100], // i-tosios dienos zibintu busena
    B[100]={},  // naujos skaiciuojamos dienos zibintu busena
    C[100];     // skirtas nakties sviecianciu zibintu sumai saugoti

    int n, //zibintu skaiciu
        k; // naktu skaicius

    Skaityti(A, n, k);
    TikrintiIrasyti(A, n, k, B, C);
    cout<<" Naktis, kai sviete daugiausia: "<<DidNr(C, k)<<endl;
    cout<<" Naktis, kai sviete maziausiai: "<<MazNr(C, k)<<endl;
    return 0;
}

void Skaityti(int A[], int &n, int &k)
{
    ifstream sk("duom.txt");

    sk>>n>>k;
    for(int i = 1; i <= n; i++)
    {
        sk>>A[i];
    }
}
// Sumuoja svieciancius zibintus
int Sum(int A[], int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += A[i];
    }
    return s;
}
// Skaiciavimo funkcia
void TikrintiIrasyti(int A[], int n, int k, int B[], int C[])
{
    for(int i = 1; i <= n; i++) // Isvedama pirmos nakties zibintu busena (sviecia (1)/nesviecia (0))
         {
            cout<<A[i]<<" ";
         }
    cout<<endl;
    C[1] = Sum(A, n); // kiek pirma diena sviete zibintu

    for(int z = 2; z <= k; z++) // naktys. Nuo antros pradedam skaiciavimus. Pirmos nakties zibintu busena duota
    {
         if (z % 2 == 0)  { B[1] = 1; B[n] = 1;} // nustatoma krastiniu zibintu busena. Veikia 3-a salyga.
                     else { B[1] = 0; B[n] = 0;} // Jei zibintui negalioja ne viena pirmu dvieju taisykliu, tai jis svies, kai naktis lygine,
                                                 // ir nesvies, kai naktis nelygine

         for(int i = 2; i <= n - 1; i++) // nustatoma nuo 2 iki n-1 zibintu busena pagal uzdavinio salyga
         {

          if (A[i - 1] == 1 && A[i + 1] == 1) {B[i] = 0;} // 1-a salyga. Zibintas nesvies, jeigu praeita nakti abu jo kaimynai sviete
            else if (A[i - 1] == 1 && A[i + 1] == 0 || A[i - 1] == 0 && A[i + 1] == 1)// 2-a salyga. Zibintas svies, jeigu praeita nakti vienas jo s sviete, o kitas ne
                    {B[i] = 1;}
                else       // 3-a salyga. Jei zibintui negalioja ne viena pirmu dvieju taisykliu, tai jis svies, kai naktis lygine, ir nesvies, kai naktis nelygine
                {
                   if (z % 2 == 0){ B[i] = 1;}
                     else { B[i] = 0; }
                }
         }

         for(int i = 1; i <= n; i++)// Isvedama z-tosios nakties zibintu busena
         {
            cout<<B[i]<<" ";
         }
         cout<<endl;

         for(int i = 1; i <= n; i++) // Perrasom i A masyva suskaiciuotos z-tosios nakties zibintu busanas
            A[i] = B[i];

         C[z] = Sum(A, n);// kiek z-taja nakti sviete zibintu
    }
}

// Randam nr nakties, kai sviete daugiausia zibintu
int DidNr(int C[], int k)
{
     int nr = 1;
     for(int i = 2; i <= k; i++)
     {
         if(C[i] > C[nr]) nr = i;


     }
     return nr;
}

// Randam nr nakties, kai sviete maziausiai zibintu
int MazNr(int C[], int k)
{
     int nr = 1;
     for(int i = 2; i <= k; i++)
     {
         if(C[i] < C[nr]) nr = i;


     }
     return nr;
}
