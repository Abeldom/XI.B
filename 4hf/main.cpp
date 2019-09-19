#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream outpr("prim.txt");
    ofstream outtok("tokeletes.out");
    ofstream outpall("pallindrom.dat");
    int x,y,z,s,b;
    bool prim;
    while(in>>x){


        b=x/2;
        prim=true;
        s=1;

        if(x>=2){
            if(x==2){
                outpr<<"2";
            }else{
                for( int i=2;i<=b;i++){
                    if(x%i==0){
                        prim=false;
                        s=s+i;
                    }
                }
                if(prim==true){
                    outpr<<x<<" ";
                }
                if(s==x){
                    outtok<<x<<" ";
                }
            }
        }

        y=x;
        z=0;
        while(y>0){
            z=10*z+y%10;
            y/=10;
        }
        if(z==x){
            outpall<<z<<" ";
        }

    }

    return 0;
}
