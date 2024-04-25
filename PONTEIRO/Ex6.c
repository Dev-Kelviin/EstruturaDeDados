#include <stdio.h>
#include <stdlib.h>

void frac(float *n) {

    int inteiro;
    float frac;

    inteiro = *n; 
    frac = *n - inteiro; 

    printf("A parte inteira e %i\nA parte fracionada e %.2f\n", inteiro, frac);
}

int main() {
    float n;

    printf("Informe um numero real, retornaremos a parte inteira e a parte fracionaria\n");
    scanf("%f", &n);

    frac(&n);

    return 0;
}