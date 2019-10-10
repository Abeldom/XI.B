#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s2;
    getline(cin,s2);

    string s1;
    cin>>s1;

    size_t x=s2.find(" ");
    cout << x<<endl;
    s1.append(s2,0,x);
    cout<<s1;
    return 0;
}
