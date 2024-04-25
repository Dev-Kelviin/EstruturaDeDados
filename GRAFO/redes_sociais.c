#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,  j, maiorNumero=0, count=0;

    int amigos[7][7] = {
        {0,1,0,0,0,0,0},
        {1,0,1,0,0,0,0},
        {0,1,0,1,1,0,1},
        {0,0,1,0,0,0,0},
        {0,0,1,0,0,1,0},
        {0,0,0,0,1,0,1},
        {0,0,1,0,0,1,0},
    };

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){

            if(amigos[i][j] == 1){
                count ++; //2
            }

        }

        if(count > maiorNumero){
            maiorNumero = count; //
        }


        count = 0;
    }
    
    printf("maior -> possui %iamigos ", maiorNumero);

}