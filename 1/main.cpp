/// Adott egy "in.txt" file, amelynek első sorában egy N természetes szám van, s a következő N sorában más természetes számok.
/// Olvassuk be az N számot, majd hozzunk létre egy 1D tömböt a következő soron lévő elemekkel.
/// Keressük meg a tömb maximum és minimum elemét, majd alkossunk a kettőből egy számot, s írjuk ki egy "out.txt" fileba

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input");
    ofstream out("output");

    int n;
    in>>n;

    int minim=10000000;
    int maxim=-10000000;

    int x;

    for(int i=0;i<n;i++){
        in>>x;
        if(x<minim){
            minim=x;
        }else if(x>maxim){
            maxim=x;
        }
    }
    out<<minim<<maxim;
    return 0;
}
