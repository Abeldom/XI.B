#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
   ifstream in("input");
   ofstream out("eredmenyek");

   int n;
   in>>n;

   int tomb[n];
   for(int i=0;i<n;i++){
       tomb[i]=rand()%1000;
       cout<<tomb[i]<<endl;
   }

   for(int i=0;i<3;i++){
       for(int j=i+1;j<n;j++){
           if(tomb[i]<tomb[j]){
              swap(tomb[i],tomb[j]);
           }
       }
   }
    cout<<tomb[0]<<"  "<<tomb[1]<<"  "<<tomb[2];
   out<<(tomb[0]+tomb[1]+tomb[2])/3;

    return 0;
}
