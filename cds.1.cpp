///   A bac.txt állomány legkevesebb két és legtöbb 106 természetes számot tartalmaz a [0,103] intervallumból,
///   a számok szóközzel vannak elválasztva egymástól. A sorozatnak legalább egy páros és legalább egy páratlan eleme van.
///   Írassuk ki a képernyőre a sorozat tagjait, szóközzel elválasztva, úgy hogy a páratlan tagok a páros tagok előtt jelenjenek
///   meg, és úgy a páratlan tagokból álló, mint a páros tagokból álló részsorozat elemei, növekvő sorrendben jelenjenek meg, ahogy a példa mutatja.
///   Tervezzen a végrehajtási idő szempontjából hatékony algoritmust.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int a[10000];
    a[i] = {0};
    int x;
    while (input >> x)
    {
        a[x]++;
    }
    for (int i = 0; i < 1001; i = i + 2)
    {
        while (a[x] > 0)
        {
            output << x << " ";
            a[x]--;
        }
    }
    for (int i = 1; i < 1001; i = i + 2)
    {
        while (a[x] > 0)
        {
            output << x << " ";
            a[x]--;
        }
    }
    return 0;
}
