#include <iostream>

using namespace std;

int main()
{


    int n,m;
    cin>>n;
    cin>>m;

    int matrix[ n ][ m ];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[ i ][ j ];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout<<matrix[ i ][ j ]<<" ";
        }
        cout<<endl;
    }

    bool szimmetrikus=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            if(matrix[ i ][ j ] != matrix[ i ][ m-1-j ]){
                szimmetrikus=false;
            }
        }
    }
    if(szimmetrikus){
        cout<<"DA";
    }else{
        cout<<"NU";
    }

    return 0;
}
