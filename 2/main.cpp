///  Adott egy "in.txt" file, amelynek első sorában egy N természetes szám van, s a következő N sorában más természetes számok.
/// Olvassuk be az N számot, majd hozzunk létre egy 1D tömböt a következő soron lévő elemekkel.
/// Keressük meg a tömb maximum és minimum elemét, majd alkossunk a kettőből egy számot, s írjuk ki egy "out.txt" fileba

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
   ifstream in("input");
   ofstream out("eredmenyek");

   int n;
   in>>n;

   int tomb[n];
   for(int i=0;i<n;i++){
       tomb[i]=rand()%1000;
       cout<<tomb[i]<<endl;
   }

   for(int i=0;i<3;i++){
       for(int j=i+1;j<n;j++){
           if(tomb[i]<tomb[j]){
              swap(tomb[i],tomb[j]);
           }
       }
   }
    cout<<tomb[0]<<"  "<<tomb[1]<<"  "<<tomb[2];
   out<<(tomb[0]+tomb[1]+tomb[2])/3;

    return 0;
}
