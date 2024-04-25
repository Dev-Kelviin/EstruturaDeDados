#include <stdio.h>
#include <stdlib.h>

int potencia(int n1, int n2){

    if(n2 == 0){
        return 1;
    } else {
       return n1 * potencia(n1, n2-1);
    }


}

int main(){

    int n1, n2;

    printf("informe um valor para base e outro valor para o expoente \n");
    scanf("%i%i",&n1, &n2);
    printf("o resultado eh %i",potencia(n1, n2));
}