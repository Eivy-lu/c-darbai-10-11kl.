#include <bits/stdc++.h>
using namespace std;

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
    ofstream rez("rez.txt");

    sk >> korteliu_sk;

    /// Įvedu į masyvus
    for(int i = 0; i < korteliu_sk; i++)
    {
        char spalva;
        int skaicius;
        sk >> spalva >> skaicius;

        if(spalva == r)
        {
            raudonos.push_back(skaicius);
        }
        else if(spalva == g)
        {
            geltonos.push_back(skaicius);
        }
        else if(spalva == m)
        {
            melynos.push_back(skaicius);
        }
        else if(spalva == j)
        {
            juodos.push_back(skaicius);
        }
    }

    /// Rikiavimai
    for(int i = 0; i < raudonos.size(); i++)
    {
        for(int j = i+1; j < raudonos.size(); j++)
        {
            if(raudonos[i] > raudonos[j])
            {
                swap(raudonos[i], raudonos[j]);
            }
        }
    }
    for(int i = 0; i < geltonos.size(); i++)
    {
        for(int j = i+1; j < geltonos.size(); j++)
        {
            if(geltonos[i] > geltonos[j])
            {
                swap(geltonos[i], geltonos[j]);
            }
        }
    }
    for(int i = 0; i < melynos.size(); i++)
    {
        for(int j = i+1; j < melynos.size(); j++)
        {
            if(melynos[i] > melynos[j])
            {
                swap(melynos[i], melynos[j]);
            }
        }
    }
    for(int i = 0; i < juodos.size(); i++)
    {
        for(int j = i+1; j < juodos.size(); j++)
        {
            if(juodos[i] > juodos[j])
            {
                swap(juodos[i], juodos[j]);
            }
        }
    }

    /// Raudonos sekos
    vector<int> seka;
    for(int i = 0; i < raudonos.size(); i++)
    {
        if(seka.empty() || raudonos[i] == seka.back() + 1)
        {
            seka.push_back(raudonos[i]);
        }
        else if(raudonos[i] == seka.back())
        {
            continue;
        }
        else
        {
            if(seka.size() >= 3)
            {
                for(int k = 0; k < seka.size(); k++)
                {
                    rez << r << " " << seka[k] << " ";
                }
                rez << endl;
            }
            seka.clear();
            seka.push_back(raudonos[i]);
        }
    }
    if(seka.size() >= 3)
    {
        for(int k = 0; k < seka.size(); k++)
        {
            rez << r << " " << seka[k] << " ";
        }
        rez << endl;
    }

    /// Geltonos sekos
    seka.clear();
    for(int i = 0; i < geltonos.size(); i++)
    {
        if(seka.empty() || geltonos[i] == seka.back() + 1)
        {
            seka.push_back(geltonos[i]);
        }
        else if(geltonos[i] == seka.back())
        {
            continue;
        }
        else
        {
            if(seka.size() >= 3)
            {
                for(int k = 0; k < seka.size(); k++)
                {
                    rez << g << " " << seka[k] << " ";
                }
                rez << endl;
            }
            seka.clear();
            seka.push_back(geltonos[i]);
        }
    }
    if(seka.size() >= 3)
    {
        for(int k = 0; k < seka.size(); k++)
        {
            rez << g << " " << seka[k] << " ";
        }
        rez << endl;
    }

    /// Melynos sekos
    seka.clear();
    for(int i = 0; i < melynos.size(); i++)
    {
        if(seka.empty() || melynos[i] == seka.back() + 1)
        {
            seka.push_back(melynos[i]);
        }
        else if(melynos[i] == seka.back())
        {
            continue;
        }
        else
        {
            if(seka.size() >= 3)
            {

                for(int k = 0; k < seka.size(); k++)
                {
                    rez << m << " " << seka[k] << " ";
                }
                rez << endl;
            }
            seka.clear();
            seka.push_back(melynos[i]);
        }
    }
    if(seka.size() >= 3)
    {
        for(int k = 0; k < seka.size(); k++)
        {
            rez << m << " " << seka[k] << " ";
        }
        rez << endl;
    }

    /// Juodos sekos
    seka.clear();
    for(int i = 0; i < juodos.size(); i++)
    {
        if(seka.empty() || juodos[i] == seka.back() + 1)
        {
            seka.push_back(juodos[i]);
        }
        else if(juodos[i] == seka.back())
        {
            continue;
        }
        else
        {
            if(seka.size() >= 3)
            {
                for(int k = 0; k < seka.size(); k++)
                {
                    rez << j << " " << seka[k] << " ";
                }
                rez << endl;
            }
            seka.clear();
            seka.push_back(juodos[i]);
        }
    }
    if(seka.size() >= 3)
    {
        for(int k = 0; k < seka.size(); k++)
        {
            rez << j << " "<< seka[k] << " ";
        }
        rez << endl;
    }

    return 0;
}
