#include <bits/stdc++.h>

using namespace std;

double vidurkis(std::vector<int> &seka);

int main()
{
    std::ifstream fd("duom.txt");
    std::ofstream fr("rez.txt");

    int n;

    fd >> n;

    std::vector<int> technika;
    std::vector<int> artistiskumas;

    for(int i=0; i<n; i++)
    {
        int temp, temp1;
        fd >> temp >>temp1;
        technika.push_back(temp);
        artistiskumas.push_back(temp1);
    }

    fr  << std::fixed << std::setprecision(2) <<vidurkis(technika) <<'\n';
    fr  << std::fixed << std::setprecision(2) <<vidurkis(artistiskumas) <<'\n';

    return 0;
}

double vidurkis(std::vector<int> &seka)
{
    double vidurkis = 0;

    for(int i=0; i<seka.size(); i++)
    {
        for(int j=i+1; j<seka.size(); j++)
        {
            if(seka[i]>seka[j]) std::swap(seka[i], seka[j]);
        }
    }

    seka.pop_back();
    seka.erase(seka.begin());

    for(int i=0; i<seka.size(); i++)
    {
        vidurkis+= seka[i];
    }

    vidurkis = vidurkis / (seka.size());
    return vidurkis;
}
