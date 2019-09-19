#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("bac.txt");
    int x;
    int maxim=-1000000;
    bool sor=false;
    while(input>>x){
        if(x>maxim){
            maxim=x;
            sor=true;
            cout<<x<<" ";
        }else if(x==maxim){
            if(sor==true){
                cout<<x<<" ";
            }
        }else{
            sor=false;
        }
    }

    return 0;
}
