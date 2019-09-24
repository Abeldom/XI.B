#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int x_head = rand() % 10 ;
    int y_head = rand() % 10 ;

    int MAP[ 10 ][ 10 ] = { 0 } ;
    int MAP[ x_head ][ y_head] = 1 ;

    bool gameover==false;

    int x_food = rand() % 10;
    int y_food = rand() % 10;

    int direction = 1;

    /// 1 - fel
    /// 3 - le
    /// 2 - bal
    /// 4 - jobb
    while( !gameover() ){
             if(x_head<0 || x_head>9 || y_head<0 || y_head>9|| MAP[x_head][y_head]==1){
                gameover=true;
             }else{
                 cout<<"############";
                for( int x = 0 ; x < 10; x ++){
                        cout<<"#";
                    for ( int y = 0 ; y < 10 ; y++){
                        if( MAP[ x ][ y ] == 1){
                           cout<<"*";
                        }

                    }
                        cout<<"#";
                }

             }

             switch(moving(direction)){
        case 1:
            if(direction==3){
                direction=3;
            }
            break;
        case 2:
            if(direction == 4){
                direction = 4;
            }
            break;
        case 3:
            if(direction == 1){
                direction = 1;
            }
            break;
        case 4:
            if(direction == 2){
                direction = 2;
            }
            break;
        }








    return 0;


}



int moving(int previsios_direction){
    if(GetAsyncKeyState(VK_RIGHT)){
        return 1;
    }else
    if(GetAsyncKeyState(VK_DOWN)){
        return 2;
    }else
    if(GetAsyncKeyState(VK_LEFT)){
        return 3;
    }else
    if(GetAsyncKeyState(VK_UP)){
        return 4;
    }else
    {
        return previsios_direction;
    }
}
