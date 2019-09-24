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
            }else{ if(x>par_max2){
                par_max2=x;
                }
            }
        }
        else{
            if(szaml>3){
                break;
            }
        }
    }

    if(szaml<3||par_max2==-10000000){
        cout<<"nu exista";
    }else{
        cout<<par_max2<<" "<<par_max;
    }
    return 0;
}
