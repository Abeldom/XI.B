#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    size_t x=s1.find(s2);
    while(x!= string::npos){
        s1[x]-=32;
        s1[x+1]-=32;
            x=s1.find(s2,x+2);
    }

    cout<<s1;
    return 0;
}
