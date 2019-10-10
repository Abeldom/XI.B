#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    /*
    string a;
    string b("teszt");
    cout<<"a=";
    cin>>a;
    cout<<a<<" "<<a.length()<<endl;
    cout<<b<<" "<<b.length()<<endl;
    cout<<a.max_size();
    */


    /*
    sring s("");
    string c;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        c=rand()%26+65;
        s=s+c;
    }
    s[x]='\n';
    cout<<s;
    */



    /*

    string s1, s2;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);

    cout << "Kerem a keresendo stringet";

    cin >> s2;

    int elofordul = 0;

    size_t hely;



    //megkeresi az elso helyet, ahol az s2 string elofordul

    hely = s1.find(s2);

    // ha a string megvan benne, akkor noveljuk az elofordul valtozot

    //ciklusosan ismeteljuk a fenti utasitasokat, vigyazva arra, hogy mindig

    //az elozo hely utan talalt helyen keressuk a keresendo stringet

    while(hely!=string::npos){
        elofordul++;
        hely= s1.find(s2, hely+1);
    }



    cout << elofordul << endl;
*/



string s1, s2;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);



    int elofordul = 0;

    size_t hely;



    //megkeresi az elso helyet, ahol az "a" karakter elofordul

    hely = s1.find("a");

    // ha a karakter megvan benne, akkor csereljuk ki A ra

    //ciklusosan ismeteljuk a fenti utasitasokat,

   //vigyazva arra, hogy mindig a mar talalt hely utan keressuk a keresendo karaktert

    while(hely!=string::npos)

    {
        s1.replace(hely, 1, "A");

        hely= s1.find("a", hely+1);


    }

    cout << s1 << endl;

    return 0;
}
