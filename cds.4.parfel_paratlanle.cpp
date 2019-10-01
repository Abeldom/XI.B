#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int tomb[n];

    for(int i=0;i<n;i++){
        cin>>tomb[i];
    }

    int matrix[n][n];
    for(int i=0;i<n;i=i+2){
        for(int j=n;j>0;j--){
            matrix[j-1][i]=tomb[n-j];
        }
    }
   for(int i=1;i<n;i=i+2){
        for(int j=0;j<n;j++){
            matrix[j][i]=tomb[j];
        }
    }

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
