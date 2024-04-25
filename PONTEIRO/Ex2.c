#include<stdio.h>
#include<stdlib.h>

int main(){

int a, b;

int *ptr = &a;
int *pont = &b;

printf("Valor de endereco de A eh: %x\n",&a);
printf("Valor de endereco de B eh: %x\n",&b);

if(&a > &b){
    printf("\nO endereco maior eh o da memoria A: %x\n",&a);
} else {
    printf("\nO endereco maior eh o da memoria B: %x\n",&b);
}
}

