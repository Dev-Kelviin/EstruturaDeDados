#include<stdio.h>
#include<stdlib.h>

int Multip_Rec(int n1, int n2){

    int resultado;

    if(n2 == 0){
        return 0;
    } else {
        n1 + Multip_Rec(n1, n2-1);
        return printf("%i + ",n1);
    }

}

int main(){

    int n1, n2;

    printf("Informe dois numeros inteiros para realizar a multiplicacao entre si \n");
    scanf("%i%i",&n1,&n2);

    Multip_Rec(n1, n2);

    printf("o resultado eh %i",Multip_Rec(n1, n2));
}

