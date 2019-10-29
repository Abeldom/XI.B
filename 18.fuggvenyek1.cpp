#include <iostream>
#include <math.h>

using namespace std;

bool pallindrom(int x){
    int a=x;
    int d=0;
    while(x>0){
        d=10*d+x%10;
        x/=10;
    }
    if(a==d){
        return true;
    }

    return false;
}

bool prim(int x){
    if(x<=1){
        return false;
    }else if(x==2){
        return true;
    }else{
        if(x%2==0){
            return false;
        }else{
            int y=sqrt(x);
            for(int i=3;i<y;i+=2){
                if(x%i==0){
                    return false;
                }
            }

        }
    }

    return true;

}

int lnko(int x,int y){
    while(x!=y){
        if(x>y){
            x-=y;
        }else{
            y-=x;
        }
    }
    return x;
}

int main()
{
    cout<<"Mit szeretnel csinalni?"<<endl;
    cout<<"1.Primszamot vizsgalni."<<endl;
    cout<<"2.pallindromot vizsgalni."<<endl;
    cout<<"3.lnko-t szamolni."<<endl;
    cout<<"mas szam ha ki akarsz lepni"<<endl;

    while(1>0){
        cout<<endl;
        int n;
        cin>>n;
        if(n==1||n==2){
            int x;
            cout<<"x=";
            cin>>x;
            if(n==1){
                if(prim(x)){
                    cout<<"primszam";
                }else{
                    cout<<"nemprim";
                }
            }else{
                if(pallindrom(x)){
                    cout<<"pallindrom";
                }else{
                    cout<<"nem pallindrom";
                }
            }
        }else if(n==3){
            int x,y;
            cout<<"1.szam=";
            cin>>x;
            cout<<"2.szam=";
            cin>>y;
            cout<<lnko(x,y);
        }else{
            break;
        }
        cout<<endl;
    }



    return 0;
}
