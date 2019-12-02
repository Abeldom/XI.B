#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("lkkt.out");

    int n;
    in>>n;

    int s_up = 0;
    int s_down = 0;
    int matrix[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<n ; j++){
            in >> matrix[i][j];
            if( i<j ) s_up += matrix[i][j];
            else if( i> j) s_down += matrix[i][j];
        }
    }

    cout << s_down << " "<<s_up<<endl;
    int x = s_up * s_down;
    while(s_up != s_down){
        if(s_up > s_down) s_up -= s_down;
        else s_down -= s_up;
    }

    out<< x/s_down;


    return 0;
}
