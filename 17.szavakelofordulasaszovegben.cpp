#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ifstream inszo("kovetelmeny.txt");
    ofstream out("output.txt");

    string a;
    string szavak[1000];
    int szoelofordul[1000];
    int szaml=0;

   if(inszo.is_open()){

        //amig van uj sor, addig olvassunk
        while(getline(inszo,a)){
            ///szoelofordul=new int[1];
            ///szavak=new string[1];

            szoelofordul[szaml]=0;
            szavak[szaml]=a;

            szaml++;
            cout<<"blabla"<<szavak[szaml-1]<<endl;

        }
   }else{

   }

    string szoveg;
    cout<<"blabla";
    while(in.is_open()){
        while(getline(in,szoveg)){
            for(int i=0;i<szaml;i++){
                size_t pos=szoveg.find(szavak[i]);
                cout<<szavak[i]<<endl;
                while(pos !=string::npos ){
                    szoelofordul[i]++;
                    pos=szoveg.find(szavak[i],pos+1);


                }

            }
            cout<<endl;
             for(int i=0;i<szaml;i++){
                cout<<szoelofordul[i]<<endl;
            }


        }
    }

    for(int i=0;i<szaml;i++){
        cout<<szoelofordul[i]<<endl;
    }


    return 0;
}
