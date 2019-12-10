#include <iostream>

using namespace std;

bool prim(int n,int i){

    if(i<=n/2){
        if(n%i==0){
            return false;
        }
        return prim(n,i+1);
    }
    return true;
}
int main()
{

    int n;
    cin>>n;
    for(int i=2;i<100;i++){
            cout<<i<<" ";
    if(prim(i,2)){
        cout<<"prim";
    }else{
        cout<<"nemprim";
    }
    cout<<endl;
    }
    return 0;
}
