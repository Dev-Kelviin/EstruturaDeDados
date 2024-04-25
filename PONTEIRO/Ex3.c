#include<stdio.h>
#include<stdlib.h>

int main(){

int a,b;

printf("Informe um valor para A\n");
scanf("%i",&a);

printf("Informe um valor para B\n");
scanf("%i",&b);

int *ptr = &a;
int *pont = &b;

if(&a > &b){
    printf("\nMemoria de A:%x\n",&a);
} else {
    printf("\nMemoria de B:%x\n",&b);
}

}