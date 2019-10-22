#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N;
    in>>N;

    string x;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
          in>>x;
          if(j>i){transform(x.begin(), x.begin()+2, x.begin(),::toupper );
          }else if(j<i){transform(x.end()-2, x.end(), x.end()-2,::toupper);}
          out<<x<<" ";
        }out<<endl;
    }


    return 0;
}



///   Adott egy input.txt  file, amely első sorában egy szám van, N. Az alatta levő N sorban szavak vannak, minden sorban N szó, " " el elválasztva egymástól.
/// Írjunk egy C++ programot, amely a főátló feletti szavak első két betűjét alakítja nagybetűvé, illetve a főátló alatti szavak utolsó két betűjét,
/// majd az így kapott eredményt egy output.txt file ba írja.
