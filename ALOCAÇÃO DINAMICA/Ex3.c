#include<stdio.h>
#include<stdlib.h>

int main(){

int n, i, *x, mult;

printf("informe a quantidade de valores a ser inserida em um vetor:\n");
scanf("%i",&n);

x = (int *) malloc (n * sizeof (int));

printf("\ninforme os valores do vetor\n");

    for(i=0; i<n; i++){
        printf("Valor da posicao %i:\n",i);
        scanf("%i", &x[i]);

    }

    system("cls");
    printf("Vetor:\n");
    for(i=0; i<n; i++){
        printf("%i ",x[i]);
    }

    printf("\nInforme um numero para saber se a multiplos no vetor acima\n");
    scanf("%i",&mult);

    for(i=0; i<n; i++){
    if (mult % x[i] == 0 ){   

    printf("\n%i e multiplo de %i\n",mult,x[i]);
    } else if (x[i] % mult == 0 ){
    printf("\n%i e multiplo de %i\n",x[i],mult); 
    }
    }
}

