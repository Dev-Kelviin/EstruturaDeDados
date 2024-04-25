#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1=5;
    float n2=10;
    char palavra[]="macaco";

    printf("Os valores iniciais sao:\n\n");
    printf("A palavra inicial eh: %s\n",palavra);
    printf("O numero inteiro inicial eh: %i\n",n1);
    printf("O numero real inicial eh:%.2f\n",n2);

    int *ptr = &n1;
    float *pont = &n2;
    char *ponteiro = &palavra;

    *ptr = 10;
    *pont = 20;
    *ponteiro = 'b';

    printf("\n\nOs valores modificados sao: \n\n");
    printf("A palavra inicial eh:%s \n",palavra);
    printf("O numero inteiro inicial eh:%i \n",n1);
    printf("O numero real inicial eh:%.2f \n",n2);

}