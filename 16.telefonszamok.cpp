#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    string x="";
    while(in>>x){
        if(x[0]=='6'){  ///vezetekes
            x.insert(0,"0040260");
        }else if(x[0]=='2' || x[0]=='4'||x[0]=='7'){
            x.insert(0,"00407");
        }
        out<<x<<endl;
    }



    return 0;
}
