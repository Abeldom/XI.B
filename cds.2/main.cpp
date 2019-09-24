///   A bac.txt állomány egy sorozatot tartalmaz legtöbb 106 különböző természetes számmal a [0,109] intervallumból. A számok egy-egy szóközzel vannak elválasztva.
/// Határozza meg a két legnagyobb páros elemet a sorozatból, amelyek előtt csak három páratlan elem található. A meghatározott elemeket írassa ki a képernyőre
/// szigorúan növekvő sorrendben, egy-egy szóközzel elválasztva, abban az esetben, ha a sorozatban nem létezik két ilyen elem, a képernyőre a Nu exista üzenetet írassa ki.
/// A kért értékek meghatározására használjon hatékony algoritmust úgy a felhasznált memória, mint a futási idő szempontjából. Példa: ha az állomány a következő számokat tartalmazza

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("bac.txt");

    int szaml=0;
    int par_max=-10000000;
    int par_max2=-10000001;

    int x;

    while(input>>x){
        if(x%2==1){
            szaml++;
        }
        if(x%2==0 && szaml==3){
            if(x>par_max){
                par_max2=par_max;
                par_max=x;
            }else if(x>par_max2)
                par_max2=x;


        }
        if(szaml>3) break;

    }

    if(szaml<3||par_max2==-10000000){
        cout<<"nu exista";
    }else{
        cout<<par_max2<<" "<<par_max;
    }
    return 0;
}
