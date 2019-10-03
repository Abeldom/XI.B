#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"
    cin>>n;

    int matrix[ n ][ n ];
    int matrix2[ n ][ n ];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[ i ][ j ];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix2[ i ][ j ];
        }
    }

    cout<<endl;
    int x[n][n]={0};
    for(int i=0;i<n;i++){ ///i - sor
         for(int j=0;j<n;j++){ /// oszlop
                x[i][j]=0;
            for(int k=0;k<n;k++){ /// lepteto
                    x[i][j]=x[i][j] + matrix[ i ][ k ]*matrix2[ k ][ j ];

            }

        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x[ i ][ j ]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
