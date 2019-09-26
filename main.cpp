#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");

    int n;
    in>>n;

    int v[n][n];
    for(int i=0;i<n; i++){
        for(int j=0;j<n;j++){
            in>>v[i][j];
        }
    }
    int legnagyobb=0;

    for(int i=0;i<n-legnagyobb;i++){
        for(int j=0;j<n-legnagyobb;j++){
            int hasonlitani=v[i][j];
            int matrixhossz;
            if(n-i<n-j){
                matrixhossz=n-i;
            }
            if(n-j<n-i){
                matrixhossz=n-j;
            }

            bool mehet=true;
            for(int x=0;x<matrixhossz && mehet==true ; x++){

                    for(int k=i;k<matrixhossz && mehet==true;k++){
                        for(int l=j;l<matrixhossz && mehet==true;l++){
                            if(hasonlitani!=v[k][l]){
                                mehet=false;
                            }
                        }
                    }
                if(mehet==true){
                    legnagyobb=x;
                }

            }
        }
    }
    cout<<legnagyobb;



    return 0;
}
