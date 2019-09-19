#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream outpr("prim.txt");
    ofstream outtok("tokeletes.txt");
    ofstream outpall("pallindrom.out");
    int a;
    while(input>>x){
        int y=x;


        int b=x/2;
        bool prim=true;
        int s=1;

        for(int i=2;i<=b;i=i+2){
            if(b%i==0){
                prim=false;
                s=s+i;
            }
        }
        if(x==1){

        }
        if(prim){
            outpr<<x;
        }


        int z=0;
        while(y>0){
            z=10*z+y%10;
            y/=10;
        }
        if(z==x){
            outpr<<z<<" ";
        }

    }

    return 0;
}
